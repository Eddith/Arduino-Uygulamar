int ledler[] = {8, 9, 10, 11, 12};
void setup() {

  for (int i = 0; i <= 5; i++) {
    pinMode(ledler[i], OUTPUT);
  }

}

void loop() {

  for (int j = 0; j < 5; j++) {
      digitalWrite(ledler[j], HIGH);
      delay(20);
      digitalWrite(ledler[j - 1], LOW);
      delay(20);
    }

    for (int k = 4; k > -1; k--) {
      digitalWrite(ledler[k], HIGH);
      delay(20);
      digitalWrite(ledler[k + 1], LOW);
      delay(20);
    }


}
