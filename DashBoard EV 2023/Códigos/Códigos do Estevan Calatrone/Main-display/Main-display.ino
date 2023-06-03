#include <esp_now.h>
#include <WiFi.h>
#include <lvgl.h>
#include <Arduino_GFX_Library.h>
#include "ui.h"

#define GFX_BL DF_GFX_BL // default backlight pin, you may replace DF_GFX_BL to actual backlight pin
#define TFT_BL 2
/* More dev device declaration: https://github.com/moononournation/Arduino_GFX/wiki/Dev-Device-Declaration */
#if defined(DISPLAY_DEV_KIT)
Arduino_GFX *gfx = create_default_Arduino_GFX();
#else /* !defined(DISPLAY_DEV_KIT) */

/* More data bus class: https://github.com/moononournation/Arduino_GFX/wiki/Data-Bus-Class */
//Arduino_DataBus *bus = create_default_Arduino_DataBus();

/* More display class: https://github.com/moononournation/Arduino_GFX/wiki/Display-Class */
//Arduino_GFX *gfx = new Arduino_ILI9341(bus, DF_GFX_RST, 0 /* rotation */, false /* IPS */);

Arduino_ESP32RGBPanel *bus = new Arduino_ESP32RGBPanel(
    GFX_NOT_DEFINED /* CS */, GFX_NOT_DEFINED /* SCK */, GFX_NOT_DEFINED /* SDA */,
    40 /* DE */, 41 /* VSYNC */, 39 /* HSYNC */, 42 /* PCLK */,
    45 /* R0 */, 48 /* R1 */, 47 /* R2 */, 21 /* R3 */, 14 /* R4 */,
    5 /* G0 */, 6 /* G1 */, 7 /* G2 */, 15 /* G3 */, 16 /* G4 */, 4 /* G5 */,
    8 /* B0 */, 3 /* B1 */, 46 /* B2 */, 9 /* B3 */, 1 /* B4 */
);
// option 1:
// ST7262 IPS LCD 800x480
 Arduino_RPi_DPI_RGBPanel *gfx = new Arduino_RPi_DPI_RGBPanel(
   bus,
   800 /* width */, 0 /* hsync_polarity */, 8 /* hsync_front_porch */, 4 /* hsync_pulse_width */, 8 /* hsync_back_porch */,
   480 /* height */, 0 /* vsync_polarity */, 8 /* vsync_front_porch */, 4 /* vsync_pulse_width */, 8 /* vsync_back_porch */,
   1 /* pclk_active_neg */, 14000000 /* prefer_speed */, true /* auto_flush */);
#endif /* !defined(DISPLAY_DEV_KIT) */
/*******************************************************************************
 * End of Arduino_GFX setting
 ******************************************************************************/

/*******************************************************************************
 * Please config the touch panel in touch.h
 ******************************************************************************/
#include "touch.h"

/* Change to your screen resolution */
static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t *disp_draw_buf;
static lv_disp_drv_t disp_drv;

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

#if (LV_COLOR_16_SWAP != 0)
  gfx->draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#else
  gfx->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#endif

  lv_disp_flush_ready(disp);
}

// REPLACE WITH THE MAC Address of your receiver 
uint8_t broadcastAddress[] = {0xA4, 0xCF, 0x12, 0x44, 0xFC, 0x9C};

// Define variables to store incoming readings
int incomingBTstatus;
int incomingCode;
int RPM;
int MAP;
int Boost;
int Load;
int Idle;
int AFR;
int InjPulse;
int InjUtiliz;
int VEvalue;
int IgnAdv;
int Knock;
int ACInput;
int StartInput;
int Output1;
int Output2;
int BatVolt;
int CLT;
int IAT;
int InjDT;
int IgnDwell;
int KMH;
int AFRLoop;
int AFRTarget;
int AFRCorr;
int StroboAngle;
int TurboTarget;
int ACC;
int ACP;
int incomingData14;
int incomingData15;
int incomingData16;

char str_temp[6];

// Variable to store if sending data was successful
String success;

//Structure example to send data
//Must match the receiver structure
typedef struct struct_message {
      int BTstatus;
      int Code;
      int Data1;
      int Data2;
      int Data3;
      int Data4;
      int Data5;
      int Data6;
      int Data7;
      int Data8;
      int Data9;
      int Data10;
      int Data11;
      int Data12;
      int Data13;
      int Data14;
      int Data15;
      int Data16;
} struct_message;

// Create a struct_message called payload to store data to be sent
struct_message payload;

// Create a struct_message to hold incoming sensor readings
struct_message incomingReadings;

esp_now_peer_info_t peerInfo;

// Callback when data is sent
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("\r\nLast Packet Send Status:\t");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
  if (status ==0){
    success = "Delivery Success :)";
  }
  else{
    success = "Delivery Fail :(";
  }
}

// Callback when data is received
void OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len) {
  memcpy(&incomingReadings, incomingData, sizeof(incomingReadings));
  //Serial.print( " OnDataRecv() is running on: Core_" );
  //Serial.println( xPortGetCoreID());
  //Serial.print("Bytes received: ");
  //Serial.println(len);
  
  incomingBTstatus = incomingReadings.BTstatus;
  incomingCode = incomingReadings.Code;

  if (incomingCode == 49)
  {
    //Serial.print("Code = ");
    //Serial.println(incomingCode);
    RPM = incomingReadings.Data1;
    MAP = incomingReadings.Data2;
    Boost = incomingReadings.Data3;
    Load = incomingReadings.Data4;
    Idle = incomingReadings.Data5;
    AFR = incomingReadings.Data6;
    InjPulse = incomingReadings.Data7;
    InjUtiliz = incomingReadings.Data8;
    VEvalue = incomingReadings.Data9;
    IgnAdv = incomingReadings.Data10;
    Knock = incomingReadings.Data11;
    ACInput = incomingReadings.Data12;
    StartInput = incomingReadings.Data13;
    Output1 = incomingReadings.Data14;
    Serial.println(Output1);
    Output2 = incomingReadings.Data15;
    incomingData16 = incomingReadings.Data16;
  }
  if (incomingCode == 50)
  {
    //Serial.print("Code = ");
    //Serial.print(incomingCode);
    BatVolt = incomingReadings.Data1;
    CLT = incomingReadings.Data2;
    CLT = CLT - 273;
    //Serial.print(" => CLT = ");
    //Serial.println(CLT);
    IAT = incomingReadings.Data3;
    InjDT = incomingReadings.Data4;
    IgnDwell = incomingReadings.Data5;
    KMH = incomingReadings.Data6;
    AFRLoop = incomingReadings.Data7;
    AFRTarget = incomingReadings.Data8;
    AFRCorr = incomingReadings.Data9;
    StroboAngle= incomingReadings.Data10;
    TurboTarget = incomingReadings.Data11;
    ACC = incomingReadings.Data12;
    ACP = incomingReadings.Data13;
    incomingData14 = incomingReadings.Data14;
    incomingData15 = incomingReadings.Data15;
    incomingData16 = incomingReadings.Data16;
  }
}

void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
  //Serial.print( " my_touchpad_read() is running on: Core_" );
  //Serial.println( xPortGetCoreID());
  if (touch_has_signal())
  {
    if (touch_touched())
    {
      data->state = LV_INDEV_STATE_PR;

      /*Set the coordinates*/
      data->point.x = touch_last_x;
      data->point.y = touch_last_y;
    }
    else if (touch_released())
    {
      data->state = LV_INDEV_STATE_REL;
    }
  }
  else
  {
    data->state = LV_INDEV_STATE_REL;
  }
}

/*void codeForTask1( void * parameter ) {
   for (;;) {
      Serial.print("Code is running on Core: ");Serial.println( xPortGetCoreID());
      my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data);
   }
}
*/
void setup() {

  //xTaskCreatePinnedToCore(codeForTask1, "Task1", 10000, NULL, 1, NULL,  0); 

  
  Serial.begin(115200);
  //Serial.print( " setup() is running on: Core_" );
  //Serial.println( xPortGetCoreID());
  // Init Serial Monitor


  // Set device as a Wi-Fi Station
  WiFi.mode(WIFI_STA);

  // Init ESP-NOW
  if (esp_now_init() != ESP_OK) 
  {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Once ESPNow is successfully Init, we will register for Send CB to
  // get the status of Trasnmitted packet
  esp_now_register_send_cb(OnDataSent);
  
  // Register peer
  memcpy(peerInfo.peer_addr, broadcastAddress, 6);
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;
  
  // Add peer        
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    Serial.println("Failed to add peer");
    return;
  }
  // Register for a callback function that will be called when data is received
  esp_now_register_recv_cb(OnDataRecv);

    // Init Display
  gfx->begin();
#ifdef TFT_BL
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);
#endif
//  gfx->fillScreen(RED);
//  delay(500);
//  gfx->fillScreen(GREEN);
//  delay(500);
//  gfx->fillScreen(BLUE);
//  delay(500);
//  gfx->fillScreen(BLACK);
//  delay(500);
  lv_init();
  delay(10);
  touch_init();
  screenWidth = gfx->width();
  screenHeight = gfx->height();
#ifdef ESP32
  disp_draw_buf = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * screenHeight/4 , MALLOC_CAP_INTERNAL | MALLOC_CAP_8BIT);
#else
  disp_draw_buf = (lv_color_t *)malloc(sizeof(lv_color_t) * screenWidth * screenHeight/4);
#endif
  if (!disp_draw_buf)
  {
    Serial.println("LVGL disp_draw_buf allocate failed!");
  }
  else
  {
    lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, screenWidth * screenHeight/4);

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
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register(&indev_drv);
    
    ui_init();
  }
}
 
void loop() 
{
  //Serial.print( " loop() is running on: Core_" );
  //Serial.println( xPortGetCoreID());
  if ((incomingBTstatus == 1) || (incomingBTstatus == 2))
  {
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x00FF00), LV_PART_MAIN | LV_STATE_DEFAULT);
  }
//  if (Output1 == 1)
//  {
//    lv_label_set_text(ui_GearLabel, "N");
//  }
//  else if 
//  {
//    lv_label_set_text(ui_GearLabel, "D");
//  }
  float f_AFR = (float)AFR;
  float flt_Data6 = f_AFR/1000;
  //Serial.println(flt_Data6);
  lv_bar_set_value(ui_RPMbar, RPM, LV_ANIM_OFF);
  lv_label_set_text_fmt(ui_TempValue, "%d", CLT);
  dtostrf(flt_Data6, 1, 2, str_temp);
  lv_label_set_text_fmt(ui_LambdaValue, "%.2f", flt_Data6);
  float f_BatVolt = (float)BatVolt;
  f_BatVolt = f_BatVolt/10;
  lv_label_set_text_fmt(ui_VelValue, "%d", KMH);
  lv_label_set_text_fmt(ui_ShiftValue, "%.2f", f_BatVolt);

  lv_timer_handler(); /* let the GUI do its work */
}
