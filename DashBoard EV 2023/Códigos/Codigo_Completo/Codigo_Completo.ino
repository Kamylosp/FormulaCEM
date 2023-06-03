/* Este é o arquivo .ino principal para o display, ou seja, 
o código principal do DashBoard. Para utilizá-lo é necessário 
inserir os arquivos exportados do SquareLine Studio na
mesma pasta deste arquivo.*/

// Bibliotecas utilizadas no display
#include <lvgl.h>
#include <demos/lv_demos.h>
#include <Arduino_GFX_Library.h>
#include "ui.h"

// Bibliotecas para salvar no Cartão SD
#include "FS.h"
#include "SD.h"
#include "SPI.h"

#define pin_botao 19                  // Define o pino do botão
#define time_botao_precionado 2000    // Tempo necessário para iniciar o armazenamento em ms
#define tempo_entre_armazenamento 200 // Tempo de intervalo entre cada armazenamento no cartão SD

// Inicializa as variáveis para utilizar no cartão SD
bool CardSDSaving = false;            // Se: ->true: salvando no cartão. Senão, não está salvando
char filename[20];                    // Armazena o nome do arquivo
unsigned int time_inicial;            // Armazena o tempo de início do armazenamento no cartão SD
unsigned int t_aux = 0;                   // Variável auxiliar


// Biblioteca da comunicação CAN
#include <CAN.h>

// Define os pinos RX e TX da comunicação com o módulo TJA1050
#define TX_GPIO_NUM 18  // Connects to CTX
#define RX_GPIO_NUM 19  // Connects to CRX

// Inicia as variáveis utilizadas para receber os parâmetros da comunicação CAN
float SOC = -1;
float highTemp = -1;
float lowTemp = -1;
float packCurrent = -1;
float packVoltage = -1;
float highVoltage = -1;
float lowVoltage = -1;


// Define a comunicação com o Display
#define GFX_BL DF_GFX_BL  // default backlight pin, you may replace DF_GFX_BL to actual backlight pin
#define TFT_BL 2

#if defined(DISPLAY_DEV_KIT)
Arduino_GFX *gfx = create_default_Arduino_GFX();
#else

Arduino_ESP32RGBPanel *bus = new Arduino_ESP32RGBPanel(
  GFX_NOT_DEFINED /* CS */, GFX_NOT_DEFINED /* SCK */, GFX_NOT_DEFINED /* SDA */,
  40 /* DE */, 41 /* VSYNC */, 39 /* HSYNC */, 42 /* PCLK */,
  45 /* R0 */, 48 /* R1 */, 47 /* R2 */, 21 /* R3 */, 14 /* R4 */,
  5 /* G0 */, 6 /* G1 */, 7 /* G2 */, 15 /* G3 */, 16 /* G4 */, 4 /* G5 */,
  8 /* B0 */, 3 /* B1 */, 46 /* B2 */, 9 /* B3 */, 1 /* B4 */
);

Arduino_RPi_DPI_RGBPanel *gfx = new Arduino_RPi_DPI_RGBPanel(
  bus,
  800 /* width */, 0 /* hsync_polarity */, 8 /* hsync_front_porch */, 4 /* hsync_pulse_width */, 8 /* hsync_back_porch */,
  480 /* height */, 0 /* vsync_polarity */, 8 /* vsync_front_porch */, 4 /* vsync_pulse_width */, 8 /* vsync_back_porch */,
  1 /* pclk_active_neg */, 14000000 /* prefer_speed */, true /* auto_flush */);

#endif

static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t *disp_draw_buf;
static lv_disp_drv_t disp_drv;
static unsigned long last_ms;

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  #if (LV_COLOR_16_SWAP != 0)
    gfx->draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
  #else
    gfx->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
  #endif

  lv_disp_flush_ready(disp);
}

void setup() {
  Serial.begin(9600);

  // Init Display
  gfx->begin();
  gfx->fillScreen(BLACK);

  #ifdef TFT_BL
    pinMode(TFT_BL, OUTPUT);
    digitalWrite(TFT_BL, HIGH);
  #endif

  lv_init();

  screenWidth = gfx->width();
  screenHeight = gfx->height();

  #ifdef ESP32
    disp_draw_buf = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * screenHeight / 4, MALLOC_CAP_INTERNAL | MALLOC_CAP_8BIT);
  #else
    disp_draw_buf = (lv_color_t *)malloc(sizeof(lv_color_t) * screenWidth * screenHeight / 4);
  #endif

  if (!disp_draw_buf) {
    Serial.println("LVGL disp_draw_buf allocate failed!");
  } else {
    lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, screenWidth * screenHeight / 4);

    /* Initialize the display */
    lv_disp_drv_init(&disp_drv);
    /* Change the following line to your display resolution */
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

    /* Initialize the (dummy) input device driver */
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    lv_indev_drv_register(&indev_drv);

    ui_init();

    Serial.println("Setup done");
  }


  // Inicializando a comunicação CAN
  delay(1000);
  Serial.println("CAN Receiver/Receiver");

  // Set the pins
  CAN.setPins(RX_GPIO_NUM, TX_GPIO_NUM);

  // start the CAN bus at 500 kbps
  if (!CAN.begin(500E3))
    Serial.println("Starting CAN failed!");
  else 
    Serial.println("CAN Initialized");


  //--------------------------------------
  // Setando o pino do botão como entrada PULL UP
    // Se botão precionado: digitalRead(pin-botao) -> false
    // Se botão solto: digitalRead(pin-botao) -> true
  pinMode(pin_botao, INPUT_PULLUP);

  // Inicializa o cartão SD e verifica se está operando normalmente
  if(!SD.begin()){
    Serial.println("Card Mount Failed");
    return;
  }
  uint8_t cardType = SD.cardType();

  if(cardType == CARD_NONE){
    Serial.println("No SD card attached");
    return;
  }
}

void loop() {
  // Atualiza as informações da comunicação CAN
  canReceiver();


  // Verifica se o botão está precionado
  if (!digitalRead(pin_botao)){
    int t0 = millis();

    // Passa a cor do cartão SD no display para azul (indicando que o botão está precionado)
    atualizaCardSDDisplay(2);

    while (!digitalRead(pin_botao)){    // Enquanto botão precionado
      if (millis() - t0 > time_botao_precionado){   // Se o botão está mais do que x ms precionado

        if (!CardSDSaving){     // Se não está ocorrendo armazenamento
          time_inicial = millis();

          atualizaCardSDDisplay(3); // Seta a cor do cartão SD do display para verde para o piloto identificar que foi detectado
          define_filename(SD);      // Define o nome do arquivo
          CardSDSaving = true; 

        } else {
          atualizaCardSDDisplay(1); // Seta a cor do cartão SD do display para verde para o piloto identificar que foi detectado
          CardSDSaving = false;
        }
        delay(5000);          // Tempo para que o piloto pare de prescionar o botão
        break;
      }
      delay(10);
    }
  }

  // Vai salvar no cartão SD caso seja necessário
  if (CardSDSaving && (millis() - t_aux) > tempo_entre_armazenamento){
    writeDataCardSD(SD, time_inicial);
    t_aux = millis();
  }

  // Atualiza as informações do display
  atualizaDisplay();

  // Atualiza o display 
  lv_timer_handler();
  delay(5);
}

// Função responsável pela leitura do módulo de comunicação CAN BUS
void canReceiver() {
  int packetSize = CAN.parsePacket();

  // If received something
  if (packetSize) {

    // Printa na serial o endereço e o tamanho do pacote recebido
    Serial.print ("Received packet with id 0x");
    Serial.print (CAN.packetId(), HEX);
    Serial.print(" lengh:");
    Serial.println (packetSize);

    // Se o ID do pacote é o ID que desejamos
    if (CAN.packetId() == 0x100){
      // Vai fazer as leituras, caso sejam possíveis
      if (CAN.available())
        packVoltage = (float)CAN.read();

      if (CAN.available())
        highVoltage = (float)CAN.read();

      if (CAN.available())
        lowVoltage = (float)CAN.read();
      
      if (CAN.available())
        packCurrent = (float)CAN.read();
      
      if (CAN.available())
        SOC = (float)CAN.read();
      
      if (CAN.available())
        highTemp = (float)CAN.read();
      
      if (CAN.available())
        lowTemp = (float)CAN.read();
      
      // Printa as informações (caso não recebeu, os valores printados serão -1)
      Serial.println("Values received: ");
      Serial.print("SOC: ");
      Serial.println(SOC);

      Serial.print("Pack Voltage: ");
      Serial.println(packVoltage);

      Serial.print("Maximum Pack Voltage: ");
      Serial.println(highVoltage);

      Serial.print("Minimum Pack Voltage: ");
      Serial.println(lowVoltage);

      Serial.print("High Pack Temperature: : ");
      Serial.println(highTemp);

      Serial.print("Low Pack Temperature: ");
      Serial.println(lowTemp);
    }
  }
}

void atualizaDisplay() {
  // Atualiza a barra de SOC
  if (SOC >= 0){
    lv_bar_set_value(ui_SOCBar, SOC, LV_ANIM_OFF);

    // Seta a cor da barra de acordo com a situação de carga
    if (SOC < 25){ // SOC < 25% -> Vermelho
      lv_obj_set_style_bg_color(ui_SOCBar, lv_color_hex(0xB10404), LV_PART_INDICATOR | LV_STATE_DEFAULT);
      lv_obj_set_style_bg_grad_color(ui_SOCBar, lv_color_hex(0xFF0000), LV_PART_INDICATOR | LV_STATE_DEFAULT);

    } else if (SOC < 75){
      lv_obj_set_style_bg_color(ui_SOCBar, lv_color_hex(0xB1A504), LV_PART_INDICATOR | LV_STATE_DEFAULT);
      lv_obj_set_style_bg_grad_color(ui_SOCBar, lv_color_hex(0xFF0000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    } else {
      lv_obj_set_style_bg_color(ui_SOCBar, lv_color_hex(0x10B104), LV_PART_INDICATOR | LV_STATE_DEFAULT);
      lv_obj_set_style_bg_grad_color(ui_SOCBar, lv_color_hex(0x30FF00), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    }
  }

  // Atualiza texto Low Temp
  lv_label_set_text(ui_LowTemp, "%.1f°C", lowTemp);

  // Atualiza texto High Temp
  lv_label_set_text(ui_HighTemp, "%.1f°C", highTemp);

  // Atualiza texto Pack Voltage
  lv_label_set_text(ui_PackVoltage, "%.1f V", packVoltage);

  // Atualiza texto High Voltage
  lv_label_set_text(ui_HighVoltage, "%.1f V", highVoltage);

  // Atualiza texto Low Voltage
  lv_label_set_text(ui_LowVoltage, "%.1f V", lowVoltage);

  // Atualiza texto Pack Current
  lv_label_set_text(ui_PackCurrent, "%.1f A", packCurrent);

  // Atualiza Card SD
  if (CardSDSaving){    // Salvando no cartão SD
    lv_obj_set_style_bg_color(ui_CardSD, lv_color_hex(0x0DFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
  } else {
    lv_obj_set_style_bg_color(ui_CardSD, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
  }
}

void atualizaCardSDDisplay(int color){
  /* Atualiza a cor da imagem do Cartão SD de acordo com o dado recebido
  Color :
    -> 1: Vermelho: Cartão não está salvando
    -> 2: Azul:     Botão está precionado (trocando de estado)
    -> 3: Verde     Cartão está salvando
  */
  switch (color){
    case 1:         // Seta card SD para vermelho
      lv_obj_set_style_bg_color(ui_CardSD, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    break;

    case 2:         // Seta card SD para azul
      lv_obj_set_style_bg_color(ui_CardSD, lv_color_hex(0x000CFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    break;

    case 3;         // Seta card SD para verde
      lv_obj_set_style_bg_color(ui_CardSD, lv_color_hex(0x0DFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    break;
  }
}


// Funções do Cartão SD
void define_filename(fs::FS &fs){
  /* Essa função tem como objetivo definir o nome do arquivo.
    Isso ocorre pois cada vez que se iniciar um registro no cartão SD,
    ele cria um novo arquivo, deixando o cartão mais organizado. */

  unsigned int i = 1;
  File file;
  do {
    sprintf(filename, "/data%d.txt", i);
    file = fs.open(filename);
    delay(10);
  } while (!file);

  file.close();
}

void writemessageCardSD (fs::FS &fs, const char * path, const char * message){
  /* Essa função tem como objetivo escrever uma mensagem no arquivo. */

  Serial.printf("Writing file: %s\n", path);

  // Tenta abrir o arquivo
  File file = fs.open(path, FILE_APPEND);

  // Verifica se foi aberto corretamente
  if(!file){
      Serial.println("Failed to open file for writing");
      return;
  }

  // Tenta armazenar a mensagem
  if(file.print(message)){
      Serial.println("File written");
  } else {
      Serial.println("Write failed");
  }
  file.close();
}

void writeDataCardSD (fs::FS &fs, unsigned int time_zero){
  // Tenta abrir o arquivo
  File file = fs.open(filename, FILE_APPEND);

  // Inicia uma variável auxiliar
  char message[100];

  // Se o arquivo abriu corretamente, executa o armazenamento
  if (file){
    sprintf(message, "----------------------------\n");
    file.print(message);
    sprintf(message, "SOC: %.2f\n", SOC);
    file.print(message);
    sprintf(message, "High Temp: %.2f\n", highTemp);
    file.print(message);
    sprintf(message, "Low Temp : %.2f\n", lowTemp);
    file.print(message);
    sprintf(message, "Pack Voltage : %.2f\n", packVoltage);
    file.print(message);
    sprintf(message, "High Voltage : %.2f\n", highVoltage);
    file.print(message);
    sprintf(message, "Low Voltage : %.2f\n", lowVoltage);
    file.print(message);
    sprintf(message, "Pack Current : %.2f\n", packCurrent);
    file.print(message);
    sprintf(message, "Tempo(seg): %d\n", (int)(millis()-time_zero)/1000);
    file.print(message);

    // Fecha o arquivo
    file.close();
  }
}
