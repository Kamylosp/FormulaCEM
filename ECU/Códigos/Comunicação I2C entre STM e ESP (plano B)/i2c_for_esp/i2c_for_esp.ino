#include <Wire.h>

#define ESP32_ADDRESS 0x12 // Endereço I2C da STM32

float value1; // Valor float 1
float value2; // Valor float 2
float value3; // Valor float 3

void setup()
{
  Wire.setPins(16, 17);
  Wire.begin(ESP32_ADDRESS); // Inicia a comunicação I2C na ESP32
  Wire.onReceive(receiveEvent); // Configura a função de callback para receber dados I2C
  Serial.begin(9600);
}

void loop()
{
  // Executa outras tarefas da ESP32 (se necessário)
}

void receiveEvent(int byteCount)
{
  if (byteCount == 12) // Verifica se o número de bytes recebidos está correto (3 floats = 12 bytes)
  {
    Wire.readBytes((uint8_t *)&value1, sizeof(float)); // Lê o valor float 1
    Wire.readBytes((uint8_t *)&value2, sizeof(float)); // Lê o valor float 2
    Wire.readBytes((uint8_t *)&value3, sizeof(float)); // Lê o valor float 3

    // Processa os valores recebidos (opcional)
    // ...

    Serial.print("Received values: ");
    Serial.print(value1);
    Serial.print(", ");
    Serial.print(value2);
    Serial.print(", ");
    Serial.println(value3);
  }
}
