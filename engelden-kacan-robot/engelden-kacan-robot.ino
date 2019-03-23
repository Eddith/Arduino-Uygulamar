int motorlar[]={8,9,10,11};
int trig=6;
int echo=7;

int sure, mesafe;

void setup() {
  for(int i=0; i<5; i++){
    pinMode(motorlar[i], OUTPUT);
  }
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {

  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  sure=pulseIn(echo, HIGH);
  mesafe=sure/29.1/2;

 if(mesafe < 20){
  dur();
  delay(300);
  geri();
  delay(300);
  sol();
  delay(300);
  ileri();
 }
 else {
  ileri();
 }
  

}
void ileri(){
  digitalWrite(motorlar[0], HIGH); //motor 1 ileri
  digitalWrite(motorlar[1], LOW);
  
  digitalWrite(motorlar[2], HIGH);//motor 2 ileri
  digitalWrite(motorlar[3], LOW); 
}

void geri(){
  digitalWrite(motorlar[0], LOW); //motor 1 geri
  digitalWrite(motorlar[1], HIGH);
  
  digitalWrite(motorlar[2], LOW);//motor 2 geri
  digitalWrite(motorlar[3], HIGH); 
}

void dur(){
  digitalWrite(motorlar[0], LOW); //motor 1 dur
  digitalWrite(motorlar[1], LOW);
  
  digitalWrite(motorlar[2], LOW);//motor 2 dur
  digitalWrite(motorlar[3], LOW); 
}

void sol(){
  digitalWrite(motorlar[0], LOW); //motor 1 geri
  digitalWrite(motorlar[1], HIGH);
  
  digitalWrite(motorlar[2], HIGH);//motor 2 ileri
  digitalWrite(motorlar[3], LOW); 
}
