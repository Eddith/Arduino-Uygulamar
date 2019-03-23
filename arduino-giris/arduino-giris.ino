int led=3;
int ldr=4;
int buzzer=6;
#define led2 5;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  analogWrite(buzzer, 150);
  analogRead(led);
  digitalRead(ldr);
}
