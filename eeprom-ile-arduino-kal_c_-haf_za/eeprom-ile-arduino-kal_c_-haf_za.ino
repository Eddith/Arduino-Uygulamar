#include <EEPROM.h>

int satir;
int veri;

void setup() {
  satir=1;
  Serial.begin(9600);
  veri=EEPROM.read(satir);
}

void loop() {

  veri=veri+1;
  EEPROM.write(satir, veri);

  Serial.println(veri);
  delay(3000);

}
