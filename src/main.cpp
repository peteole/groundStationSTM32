#include <Arduino.h>


HardwareSerial HC12(PA10, PA9);
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  HC12.begin(9600);
}

void loop()
{
  while (HC12.available())
  {
    Serial.write(HC12.read());
  }
  while(Serial.available()){
    HC12.write(Serial.read());
  }
}