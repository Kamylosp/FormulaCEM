/* Este código tem como objetivo testar o armazenamento
dos dados no cartão SD.

Código compila normalmente para ESP32-S3*/


#include "FS.h"
#include "SD.h"
#include "SPI.h"

#define pin_botao 19
#define time_botao_precionado 2000    // Tempo necessário para iniciar o armazenamento em ms

bool CardSDSaving = false;
char filename[20];

float SOC = -1;
float highTemp = -1;
float lowTemp = -1;
float packCurrent = -1;
float packVoltage = -1;
float highVoltage = -1;
float lowVoltage = -1;



void setup(){
  Serial.begin(9600);

  pinMode(pin_botao, INPUT_PULLUP);

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
  if (!digitalRead(pin_botao)){
    int t0 = millis();

    while (!digitalRead(pin_botao)){    // Enquanto botão precionado
      if (millis() - t0 > time_botao_precionado){   // Se o botão está mais do que x ms precionado
        if (!CardSDSaving){     // Se não está ocorrendo armazenamento
          define_filename(SD);    // Define o nome do arquivo
          CardSDSaving = true; 
          break;
        } else{
          CardSDSaving = false;
          delay(5000);
        }
      }
      delay(10);
    }
  }

  delay(100);
}

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

    File file = fs.open(path, FILE_WRITE);
    if(!file){
        Serial.println("Failed to open file for writing");
        return;
    }
    if(file.print(message)){
        Serial.println("File written");
    } else {
        Serial.println("Write failed");
    }
    file.close();
}

void writeDataCardSD (fs::FS &fs, unsigned int time_inicial){
  File file = fs.open(filename, FILE_WRITE);

  char message[100];

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

    sprintf(message, "Tempo(seg): %d\n", (int)(millis()-time_inicial)/1000);
    file.print(message);
    file.close();
  }
}
