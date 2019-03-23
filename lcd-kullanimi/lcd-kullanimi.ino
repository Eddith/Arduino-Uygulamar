#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <dht11.h> // dht11 kütüphanesini ekliyoruz.
#define DHT11PIN 2 // DHT11PIN olarak Dijital 2'yi belirliyoruz.
dht11 DHT11;

LiquidCrystal_I2C lcd(0x27,16,2);

int top;

void setup() {
  lcd.begin();
  lcd.print("ISMEK LCD");
  delay(2000);
  lcd.clear();
}

void loop() {
  int chk = DHT11.read(DHT11PIN);
  lcd.setCursor(0,0);
  lcd.print("Sıcaklık : ");
  lcd.setCursor(13,0);
  lcd.print((float)DHT11.temperature);
  delay(1000);
  /*lcd.print("Toplama Islemi");
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("2 + 2 = ");
  int top = 2 + 2;
  lcd.setCursor(9,1);
  lcd.print(top);*/
}
