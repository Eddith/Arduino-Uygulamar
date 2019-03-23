int pot=A0;
int led=8;
int potdeger;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
  

}

void loop() {
  potdeger= analogRead(pot);
  potdeger=map(potdeger,0,1023,0,255);
  analogWrite(led, potdeger);
  delay(10);
  Serial.println(potdeger);

}
