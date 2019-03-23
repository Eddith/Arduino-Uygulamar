#define led 12
#define button 2
bool durum = false;
void setup() {

 pinMode(button, INPUT);
 pinMode(led, OUTPUT);
 Serial.begin(9600);
 durum = false;

}

void loop() {

  int kontrol = digitalRead(button);

  if(kontrol == HIGH){

    if(durum == true){
      digitalWrite(led, HIGH);
      durum = false;
      delay(200);  
    }
    else if(durum == false){
      digitalWrite(led, LOW);
      durum = true;
      delay(200);
    }
    
  }

}
