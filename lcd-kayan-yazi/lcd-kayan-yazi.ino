#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  lcd.begin();
  lcd.print("ismek lcd");
  delay(2000);
  lcd.clear();
}

void loop() {

  for (int i = 0; i < 11; i++) {
    lcd.clear();
    lcd.setCursor(i, 0); // en baştan başlar
    lcd.print("ALI");
    lcd.setCursor(i, 1); // en baştan başlar
    lcd.print("KOCMAN");
    delay(250);
  }
  for (int j = 10; j > -1; j--) {
    lcd.clear();
    lcd.setCursor(j, 0); // en baştan başlar
    lcd.print("ALI");
    lcd.setCursor(j, 1); // en baştan başlar
    lcd.print("KOCMAN");
    delay(250);
  }
  

}
