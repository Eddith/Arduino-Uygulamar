int ledler[]={11,9,10};
void setup() {
  for(int i=0; i<3; i++){
    pinMode(ledler[i], OUTPUT);
  }
}

void loop() {
  analogWrite(ledler[0], random(0,255));
  analogWrite(ledler[1], random(0,255));
  analogWrite(ledler[2], random(0,255)); 
  delay(1000);
}
