int trig=8;
int echo=7;
int led=6;
int pot=A0;
int potdeger;

int buzzer=9;

int sure, mesafe;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  sure=pulseIn(echo, HIGH);
  mesafe=sure/29.1/2; //cm hesaplaması

  potdeger=analogRead(pot);
  potdeger=map(potdeger,0,1023,0,200);
  Serial.println(potdeger);

  if(mesafe < potdeger){
    digitalWrite(led, HIGH);
    analogWrite(buzzer, 1000);
    delay(100);
    analogWrite(buzzer, 0);
    delay(100);
  } 
  else {
    digitalWrite(led, LOW);
    analogWrite(buzzer, 0);
  }
  
  Serial.print("Mesafe ");
  Serial.println(mesafe);
  
  
}
