/* Este código tem como objetivo testar o armazenamento
dos dados no cartão SD.

Código compila normalmente para ESP32-S3*/

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

// Inicia as variáveis utilizadas para receber os parâmetros da comunicação CAN
float SOC = -1;
float highTemp = -1;
float lowTemp = -1;
float packCurrent = -1;
float packVoltage = -1;
float highVoltage = -1;
float lowVoltage = -1;

void setup(){
  Serial.begin(9600);

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

  // Verifica se o botão está precionado
  if (!digitalRead(pin_botao)){
    int t0 = millis();

    while (!digitalRead(pin_botao)){    // Enquanto botão precionado
      if (millis() - t0 > time_botao_precionado){   // Se o botão está mais do que x ms precionado

        if (!CardSDSaving){     // Se não está ocorrendo armazenamento
          time_inicial = millis();    // Define o tempo de inicio de armazenamento

          define_filename(SD);      // Define o nome do arquivo
          CardSDSaving = true; 

        } else {
          CardSDSaving = false;
        }
        delay(5000);          // Tempo para que o piloto pare de prescionar o botão
        break;
      }
      delay(10);
    }
  }

  // Vai salvar no cartão SD caso seja necessário
  if (CardSDSaving)
    writeDataCardSD(SD, time_inicial);

  delay(100);
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
