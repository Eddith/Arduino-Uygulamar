int ledler[]={11,9,10};
int potlar[]={A0,A1,A2};
int potk;
int poty;
int potm;
void setup() {
  for(int i=0; i<3; i++){
    pinMode(ledler[i], OUTPUT);
  }
  for(int k=0; k<3; k++){
    pinMode(potlar[k], INPUT);
  }

}

void loop() {
  potk=analogRead(potlar[0]);
  poty=analogRead(potlar[1]);
  potm=analogRead(potlar[2]);
  potk=map(potk, 0, 1023, 0, 255);
  poty=map(poty, 0, 1023, 0, 255);
  potm=map(potm, 0, 1023, 0, 255);
  analogWrite(ledler[0], potk);
  analogWrite(ledler[1], poty);
  analogWrite(ledler[2], potm); 
}
