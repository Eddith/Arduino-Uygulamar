int ledler[] = {2, 3, 4, 5, 6, 8, 9, 7};

void setup() {
  for (int i = 0; i < 9; i++) {
    pinMode(ledler[i], OUTPUT);
  }
}

void loop() {

  digitalWrite(ledler[0], HIGH);
  digitalWrite(ledler[1], HIGH);
  digitalWrite(ledler[2], HIGH);
  digitalWrite(ledler[3], HIGH);
  digitalWrite(ledler[4], HIGH);
  digitalWrite(ledler[5], LOW);
  digitalWrite(ledler[6], HIGH);
  digitalWrite(ledler[7], HIGH);
  delay(500);
  
  digitalWrite(ledler[0], LOW);
  digitalWrite(ledler[1], HIGH);
  digitalWrite(ledler[2], HIGH);
  digitalWrite(ledler[3], LOW);
  digitalWrite(ledler[4], LOW);
  digitalWrite(ledler[5], LOW);
  digitalWrite(ledler[6], LOW);
  digitalWrite(ledler[7], HIGH);
  delay(500);


  digitalWrite(ledler[0], HIGH);
  digitalWrite(ledler[1], HIGH);
  digitalWrite(ledler[2], LOW);
  digitalWrite(ledler[3], HIGH);
  digitalWrite(ledler[4], HIGH);
  digitalWrite(ledler[5], HIGH);
  digitalWrite(ledler[6], LOW);
  digitalWrite(ledler[7], HIGH);
  delay(500);

  digitalWrite(ledler[0], HIGH);
  digitalWrite(ledler[1], HIGH);
  digitalWrite(ledler[2], HIGH);
  digitalWrite(ledler[3], HIGH);
  digitalWrite(ledler[4], LOW);
  digitalWrite(ledler[5], HIGH);
  digitalWrite(ledler[6], LOW);
  digitalWrite(ledler[7], HIGH);
  delay(500);

  digitalWrite(ledler[0], LOW);
  digitalWrite(ledler[1], HIGH);
  digitalWrite(ledler[2], HIGH);
  digitalWrite(ledler[3], LOW);
  digitalWrite(ledler[4], LOW);
  digitalWrite(ledler[5], HIGH);
  digitalWrite(ledler[6], HIGH);
  digitalWrite(ledler[7], HIGH);
  delay(500);

  digitalWrite(ledler[0], HIGH);
  digitalWrite(ledler[1], LOW);
  digitalWrite(ledler[2], HIGH);
  digitalWrite(ledler[3], HIGH);
  digitalWrite(ledler[4], LOW);
  digitalWrite(ledler[5], HIGH);
  digitalWrite(ledler[6], HIGH);
  digitalWrite(ledler[7], HIGH);
  delay(500);

  digitalWrite(ledler[0], HIGH);
  digitalWrite(ledler[1], LOW);
  digitalWrite(ledler[2], HIGH);
  digitalWrite(ledler[3], HIGH);
  digitalWrite(ledler[4], HIGH);
  digitalWrite(ledler[5], HIGH);
  digitalWrite(ledler[6], HIGH);
  digitalWrite(ledler[7], HIGH);
  delay(500);

  digitalWrite(ledler[0], HIGH);
  digitalWrite(ledler[1], HIGH);
  digitalWrite(ledler[2], HIGH);
  digitalWrite(ledler[3], LOW);
  digitalWrite(ledler[4], LOW);
  digitalWrite(ledler[5], LOW);
  digitalWrite(ledler[6], LOW);
  digitalWrite(ledler[7], HIGH);
  delay(500);

  digitalWrite(ledler[0], HIGH);
  digitalWrite(ledler[1], HIGH);
  digitalWrite(ledler[2], HIGH);
  digitalWrite(ledler[3], HIGH);
  digitalWrite(ledler[4], HIGH);
  digitalWrite(ledler[5], HIGH);
  digitalWrite(ledler[6], HIGH);
  digitalWrite(ledler[7], HIGH);
  delay(500);

  digitalWrite(ledler[0], HIGH);
  digitalWrite(ledler[1], HIGH);
  digitalWrite(ledler[2], HIGH);
  digitalWrite(ledler[3], HIGH);
  digitalWrite(ledler[4], LOW);
  digitalWrite(ledler[5], HIGH);
  digitalWrite(ledler[6], HIGH);
  digitalWrite(ledler[7], HIGH);
  delay(500);
}
