#include <Wire.h>

void setup() 
{
  Wire.begin(7); // активируем интерфейс, роль slave с указанием адреса
  Wire.onRequest(send_string); // регистрируем ф-ию, которая будет вызвана, если master запросит данные у slave
}

void loop() {}

// функция отправки строки ведущему устройству
void send_string()
{
  Wire.write("hello world!");
}
