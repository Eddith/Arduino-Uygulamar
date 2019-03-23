#include <dht11.h> // dht11 kütüphanesini ekliyoruz.

#define DHT11PIN 2 // DHT11PIN olarak Dijital 2'yi belirliyoruz.

dht11 DHT11;

void setup()
{
  Serial.begin(9600); // Seri iletişimi başlatıyoruz.

}

void loop()
{

  int chk = DHT11.read(DHT11PIN);

  Serial.println((float)DHT11.temperature);

  delay(1000);

}
