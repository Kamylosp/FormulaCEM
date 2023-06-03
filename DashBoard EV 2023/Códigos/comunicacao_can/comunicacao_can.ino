/* Este código tem como função testar a comunicaçao CAN com o BMS */
#include <CAN.h>

// Define os pinos RX e TX da comunicação com o módulo TJA1050
#define TX_GPIO_NUM   18  // Connects to CTX
#define RX_GPIO_NUM   19  // Connects to CRX

// Inicia as variáveis utilizadas para receber os parâmetros
float SOC = -1;
float highTemp = -1;
float lowTemp = -1;
float packCurrent = -1;
float packVoltage = -1;
float maxPackVoltage = -1;
float minPackVoltage = -1;

void setup() {
  Serial.begin (9600);

  while (!Serial);

  delay (1000);

  Serial.println ("CAN Receiver/Receiver");

  // Set the pins
  CAN.setPins (RX_GPIO_NUM, TX_GPIO_NUM);

  // start the CAN bus at 500 kbps
  if (!CAN.begin (500E3)) {
    Serial.println ("Starting CAN failed!");
    while (1);
  } else {
    Serial.println ("CAN Initialized");
  }
}

void loop() {
  // Chama a função de leitura do módulo da comunicação CAN
  canReceiver();

  delay(10);
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
        maxPackVoltage = (float)CAN.read();

      if (CAN.available())
        minPackVoltage = (float)CAN.read();
      
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
      Serial.println(maxPackVoltage);

      Serial.print("Minimum Pack Voltage: ");
      Serial.println(minPackVoltage);

      Serial.print("High Pack Temperature: : ");
      Serial.println(highTemp);

      Serial.print("Low Pack Temperature: ");
      Serial.println(lowTemp);
    }

  }
}