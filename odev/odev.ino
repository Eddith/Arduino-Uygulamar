int segmend[] = {2, 3, 4, 5, 6, 8, 9, 7};
int buton = 12;
int yled = 10;
int kled = 11;
int pot = A0;
int potdeger;
bool durum = false;

void setup() {
  for (int i = 0; i < 9; i++) {
    pinMode(segmend[i], OUTPUT);
  }
  pinMode(yled, OUTPUT);
  pinMode(kled, OUTPUT);
  pinMode(buton, INPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
  durum = false;
  digitalWrite(kled, HIGH);

}

void loop() {
  int kontrol = digitalRead(buton);
  Serial.println(potdeger);
  if (kontrol == 1){
    if (durum == true) {
      digitalWrite(kled, LOW);
      digitalWrite(yled, HIGH);
      delay(2000);
      potdeger= analogRead(pot);
      potdeger=map(potdeger,0,1023,0,9);
      segmendPot(potdeger);
      delay(50);
      durum = false;
    }
    else if (durum == false) {
      digitalWrite(kled, HIGH);
      digitalWrite(yled, LOW);
      delay(3000);
      durum = true;
    }
  }
}
void segmendPot(int index) {
  switch (index) {
    case 0:
      digitalWrite(segmend[0], HIGH);
      digitalWrite(segmend[1], HIGH);
      digitalWrite(segmend[2], HIGH);
      digitalWrite(segmend[3], HIGH);
      digitalWrite(segmend[4], HIGH);
      digitalWrite(segmend[5], LOW);
      digitalWrite(segmend[6], HIGH);
      digitalWrite(segmend[7], HIGH);
      break;
    case 1:
      digitalWrite(segmend[0], LOW);
      digitalWrite(segmend[1], HIGH);
      digitalWrite(segmend[2], HIGH);
      digitalWrite(segmend[3], LOW);
      digitalWrite(segmend[4], LOW);
      digitalWrite(segmend[5], LOW);
      digitalWrite(segmend[6], LOW);
      digitalWrite(segmend[7], HIGH);
      break;
    case 2:
      digitalWrite(segmend[0], HIGH);
      digitalWrite(segmend[1], HIGH);
      digitalWrite(segmend[2], LOW);
      digitalWrite(segmend[3], HIGH);
      digitalWrite(segmend[4], HIGH);
      digitalWrite(segmend[5], HIGH);
      digitalWrite(segmend[6], LOW);
      digitalWrite(segmend[7], HIGH);
      break;
    case 3:
      digitalWrite(segmend[0], HIGH);
      digitalWrite(segmend[1], HIGH);
      digitalWrite(segmend[2], HIGH);
      digitalWrite(segmend[3], HIGH);
      digitalWrite(segmend[4], LOW);
      digitalWrite(segmend[5], HIGH);
      digitalWrite(segmend[6], LOW);
      digitalWrite(segmend[7], HIGH);
      break;
    case 4:
      digitalWrite(segmend[0], LOW);
      digitalWrite(segmend[1], HIGH);
      digitalWrite(segmend[2], HIGH);
      digitalWrite(segmend[3], LOW);
      digitalWrite(segmend[4], LOW);
      digitalWrite(segmend[5], HIGH);
      digitalWrite(segmend[6], HIGH);
      digitalWrite(segmend[7], HIGH);
      break;
    case 5:
      digitalWrite(segmend[0], HIGH);
      digitalWrite(segmend[1], LOW);
      digitalWrite(segmend[2], HIGH);
      digitalWrite(segmend[3], HIGH);
      digitalWrite(segmend[4], LOW);
      digitalWrite(segmend[5], HIGH);
      digitalWrite(segmend[6], HIGH);
      digitalWrite(segmend[7], HIGH);
      break;
    case 6:
      digitalWrite(segmend[0], HIGH);
      digitalWrite(segmend[1], LOW);
      digitalWrite(segmend[2], HIGH);
      digitalWrite(segmend[3], HIGH);
      digitalWrite(segmend[4], HIGH);
      digitalWrite(segmend[5], HIGH);
      digitalWrite(segmend[6], HIGH);
      digitalWrite(segmend[7], HIGH);
      break;
    case 7:
      digitalWrite(segmend[0], HIGH);
      digitalWrite(segmend[1], HIGH);
      digitalWrite(segmend[2], HIGH);
      digitalWrite(segmend[3], LOW);
      digitalWrite(segmend[4], LOW);
      digitalWrite(segmend[5], LOW);
      digitalWrite(segmend[6], LOW);
      digitalWrite(segmend[7], HIGH);
      break;
    case 8:
      digitalWrite(segmend[0], HIGH);
      digitalWrite(segmend[1], HIGH);
      digitalWrite(segmend[2], HIGH);
      digitalWrite(segmend[3], HIGH);
      digitalWrite(segmend[4], HIGH);
      digitalWrite(segmend[5], HIGH);
      digitalWrite(segmend[6], HIGH);
      digitalWrite(segmend[7], HIGH);
      break;
    case 9:
      digitalWrite(segmend[0], HIGH);
      digitalWrite(segmend[1], HIGH);
      digitalWrite(segmend[2], HIGH);
      digitalWrite(segmend[3], HIGH);
      digitalWrite(segmend[4], LOW);
      digitalWrite(segmend[5], HIGH);
      digitalWrite(segmend[6], HIGH);
      digitalWrite(segmend[7], HIGH);
      break;
  }
}
