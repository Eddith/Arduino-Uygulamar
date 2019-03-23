#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h" //Modül ile ilgili kütüphaneleri ekliyoruz
int mesaj[1];
RF24 alici(7, 8);
const uint64_t kanal = 0xE5E5E5E5E5F6;
int led = 13;

void setup(void) {
  Serial.begin(9600);

  alici.begin();
  alici.openReadingPipe(1, kanal);
  alici.startListening();
  pinMode(led, OUTPUT);
}

void loop(void) {
  if (alici.available())
  {
    bool done = false;
    while (!done)
    {
      done = alici.read(mesaj, 1);

      if (mesaj[0] == 5)
      {
        delay(10);
        digitalWrite(led, HIGH);
      }
      else {
        digitalWrite(led, LOW);
      }
      delay(10);
    }
  }
}
