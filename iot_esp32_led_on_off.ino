#include <BluetoothSerial.h>
BluetoothSerial SerialBT; 

int led_1 = 16;
int led_2 = 17;
int led_3 = 5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  SerialBT.begin("ESP32_BT");

}

void loop() {
  // put your main code here, to run repeatedly:
  String value;
  if(SerialBT.available()){
    value = SerialBT.readString();
    if(value == "1"){
      digitalWrite(led_1, HIGH);
      Serial.println("Nhận 1, bật LED đỏ ");
    }
    if(value == "2"){
      digitalWrite(led_1, LOW);
      Serial.println("Nhận 2, tắt LED đỏ");
    }
    if(value =="3"){
      digitalWrite(led_2, HIGH);
      Serial.println("Nhận 3, bật LED vàng");
    }
    if(value =="4"){
      digitalWrite(led_3, HIGH);
      Serial.println("Nhận 4, bật LED vàng");
    }
    if(value =="5"){
      digitalWrite(led_3, HIGH);
      Serial.println("Nhận 5, bật LED vàng");
    }
    if(value =="6"){
      digitalWrite(led_3, LOW);
      Serial.println("Nhận 6, tắt LED xanh");
    }
  }
  delay(50);

}
