#define RX_PIN 16
#define TX_PIN 17 

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
  Serial.begin(115200); // Inicializa a comunicação serial com o monitor serial
  Serial2.setPins(RX_PIN, TX_PIN);
  Serial2.begin(9600); // Inicializa a comunicação serial com o primeiro ESP (porta 16 como RX e porta 17 como TX)
}

void loop() {
  if (Serial2.available() >= sizeof(BMS)) {

    Serial2.readBytes((byte*)&BMS.SOC, sizeof(float));
    Serial2.readBytes((byte*)&BMS.packVoltage, sizeof(float));
    Serial2.readBytes((byte*)&BMS.lowCellVoltage, sizeof(float));
    Serial2.readBytes((byte*)&BMS.highCellVoltage, sizeof(float));
    Serial2.readBytes((byte*)&BMS.packCurrent, sizeof(float));
    Serial2.readBytes((byte*)&BMS.highPackTemperature, sizeof(float));
    Serial2.readBytes((byte*)&BMS.lowPackTemperature, sizeof(float));

    print_dados_bms();
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
