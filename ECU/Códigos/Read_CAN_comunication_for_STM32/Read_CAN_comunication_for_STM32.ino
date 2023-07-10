#include "STM32_CAN.h"

STM32_CAN Can(CAN1, DEF );  //Use PA11/12 pins for CAN1.

static CAN_message_t CAN_RX_msg;


// Variáveis referentes as informações do BMS
float SOC = -1;
float highTemp = -1;
float lowTemp = -1;
float packCurrent = -1;
float packVoltage = -1;
float maxPackVoltage = -1;
float minPackVoltage = -1;


void setup() {
  Serial.begin(9600);

  Can.begin();
  Can.setBaudRate(500000);  // 500KBPS
}


void loop() {

  // Se recebeu alguma informação
  if (Can.read(CAN_RX_msg) ) {

    // Printa o ID da mensagem
    Serial.print("Reveived datas from id ");
    Serial.println(CAN_RX_msg.id, HEX);

    // Se o id da mensagem é referente ao BMS
    if (CAN_RX_msg.id == 0x100){

      for(int i=0; i<CAN_RX_msg.len; i++) {
        Serial.print(CAN_RX_msg.buf[i]); 
        if (i != (CAN_RX_msg.len-1))  Serial.print(" ");
      }
      Serial.println();
    }


    /*
    // Armazenando as informações
    SOC = (float) CAN_RX_msg.buf[0];
    packVoltage = (float) CAN_RX_msg.buf[1];
    maxCellVoltage = (float) CAN_RX_msg.buf[2];
    minCellVoltage = (float) CAN_RX_msg.buf[3];
    packCurrent = (float) CAN_RX_msg.buf[4];
    highTemp = (float) CAN_RX_msg.buf[5];
    lowTemp = (float) CAN_RX_msg.buf[6];

    Serial.println("Values received: ");
    Serial.print("SOC: ");
    Serial.println(SOC);
    Serial.print("Pack Voltage: ");
    Serial.println(packVoltage);
    Serial.print("Maximum Cell Voltage: ");
    Serial.println(maxCellVoltage);
    Serial.print("Minimum Cell Voltage: ");
    Serial.println(minCellVoltage);
    Serial.print("Pack Current: ");
    Serial.println(packCurrent);
    Serial.print("High Pack Temperature: : ");
    Serial.println(highTemp);
    Serial.print("Low Pack Temperature: : ");
    Serial.println(lowTemp);
    */



  }
}