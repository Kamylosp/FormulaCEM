#define RX_PIN PB6
#define TX_PIN PB7

struct BMS_datas {
  float SOC = -1;
  float packVoltage = -1;
  float lowCellVoltage = -1;
  float highCellVoltage = -1;
  float packCurrent = -1;
  float highPackTemperature = -1;
  float lowPackTemperature = -1;
};

BMS_datas BMS;

void setup() {
  Serial.begin(9600);
  Serial2.setRx(RX_PIN);
  Serial2.setTx(TX_PIN);
  Serial2.begin(9600);
}

void loop() {
  sendDatasToDisplay();
  delay(1000);
}

void sendDatasToDisplay (){
  byte* dados = (byte*)&BMS;
  int tamanho = sizeof(BMS);

  for (int i = 0; i < tamanho; i++) {
    Serial2.write(dados[i]);
  }
}

void print_dados_bms(){
  Serial.println("Dados recebidos: ");
  Serial.print("SOC: ");
  Serial.println(BMS.SOC);
  Serial.print("Pack Voltage: ");
  Serial.println(BMS.packVoltage);
  Serial.print("High Cell Voltage: ");
  Serial.println(BMS.highCellVoltage);
  Serial.print("Low Cell Voltage: : ");
  Serial.println(BMS.lowCellVoltage);
  Serial.print("Pack Current: ");
  Serial.println(BMS.packCurrent);
  Serial.print("High Pack Temperature: ");
  Serial.println(BMS.highPackTemperature);
  Serial.print("Low Pack Temperature: ");
  Serial.println(BMS.lowPackTemperature);
}
