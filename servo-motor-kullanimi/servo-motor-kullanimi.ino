#include <Servo.h>
#include <EEPROM.h>

int satir1,veri1,satir2;

//int pot=A0;
//int deger;

bool yon;

Servo motor;

void setup() {
  satir1=1;
  satir2=2; 
  motor.attach(3); //Sevo motorun takılı olduğu pin **Kesinlikle pwm pinine bağlı olmak zorunda**
  //pinMode(pot, INPUT);

}

void loop() {
  
  /*deger=analogRead(pot);
  deger=map(deger,0,1023,0,180);

  motor.write(deger);*/
  yon=EEPROM.read(satir2);

  if(yon==1){
    veri1=EEPROM.read(satir1);
    for(int i=veri1; i<181; i++){
      motor.write(i); //0-180 deger alır
      EEPROM.write(satir1, i);
      yon=1;
      EEPROM.write(satir2, yon);
      delay(10);
      if(i==180){
        yon=0;
        EEPROM.write(satir2, yon);
      }
    }
  }
  else{
    veri1=EEPROM.read(satir1);
    for(int k=veri1; k>-1; k--){
      motor.write(k);
      EEPROM.write(satir1, k);
      yon=0;
      EEPROM.write(satir2, yon);
      delay(10);
      if(k==0){
        yon=1;
        EEPROM.write(satir2, yon);
      }
    }
  }
  

}
