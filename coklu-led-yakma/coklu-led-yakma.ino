int ledler[]={8,9,10,11,12};

void setup() {

  for(int i=0; i<5; i++) {
    pinMode(ledler[i], OUTPUT);
  }

}

void loop() {

  for(int j=0; j<5; j++){
    digitalWrite(ledler[j], HIGH);
    delay(400);
  }

}
