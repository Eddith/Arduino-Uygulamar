#define led 12
#define button 2
void setup() {

 pinMode(button, INPUT);
 pinMode(led, OUTPUT);
 Serial.begin(9600);

}

void loop() {

  int kontrol = digitalRead(button);

  if(kontrol == HIGH){
    digitalWrite(led, HIGH);
    Serial.println("butona basildi");
  }
  else {
    digitalWrite(led, LOW);
    Serial.println("butona basilmadi");
  }

}
