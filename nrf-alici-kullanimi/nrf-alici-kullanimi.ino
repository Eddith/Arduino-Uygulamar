#include <SPI.h>
#include "nRF24L01p.h"

int led = 2;
nRF24L01p alici(7, 8);
/* CSN - > 7, CE -> 8 olarak belirlendi */

void setup() {
  Serial.begin(9600);
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  /* SPI başlatıldı */
  alici.channel(80);
  alici.RXaddress("Hasbi");
  alici.init();
  pinMode(led, OUTPUT);
  /* Alıcı ayarları yapıldı */
}

void loop() {
  int yan;
  while (alici.available()) {
    /* Modülden veri geldiği sürece while devam edecek */
    alici.read();

    alici.rxPL(yan);
    Serial.println(yan);
    /* Modülden gelen veri okundu */
    if (yan == 5)
    {

      digitalWrite(led, LOW);
      delay(1000);
      digitalWrite(led, HIGH);
      delay(1000);
    }
    else {

      digitalWrite(led, LOW);
    }

  }
}
