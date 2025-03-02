#include <Wire.h>

void setup() {
  Wire.begin(); // активируем интерфейс, роль master
  Serial.begin(9600); // настройка скорости COM-порта для чтения данных
}

void loop() {
  Wire.requestFrom(7, 12); // запрос 12 байт у slave с адресом 7
  while(Wire.available())
  {
    char c = Wire.read();
    Serial.print(c); // отображение полученных символов в окне Serial Monitor
  }

  delay(300);
}
