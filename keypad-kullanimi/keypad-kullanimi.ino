#include <Keypad.h>

char tuslar[4][4]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte satirpinler[4]={9,8,7,6};
byte sutunpinler[4]={5,4,3,2};

Keypad key=Keypad(makeKeymap(tuslar),satirpinler,sutunpinler,4,4);

char basilantus;

void setup() {
  Serial.begin(9600);

}

void loop() {
  basilantus=key.getKey();

  if(basilantus!=NO_KEY){
    Serial.println(basilantus);
    delay(100); 
  }
  
  
}
