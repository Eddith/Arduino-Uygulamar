int motor[]={8,9};
int pot=A0;
int ENA=10;
int hiz;
void setup() {

  for(int i=0; i<2; i++){
    pinMode(motor[i], OUTPUT);
  }
  pinMode(pot, INPUT);
  pinMode(ENA, OUTPUT);

}

void loop() {

  hiz=analogRead(pot);
  hiz=map(hiz,0,1023,0,255);

  digitalWrite(motor[0], HIGH);
  digitalWrite(motor[1], LOW);
  analogWrite(ENA, hiz);

}
