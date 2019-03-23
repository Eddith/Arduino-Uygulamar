int motor1ileri=8;
int motor1geri=9;
int hiz=10;
void setup() {
  pinMode(motor1ileri, OUTPUT);
  pinMode(motor1geri, OUTPUT);
  pinMode(hiz, OUTPUT);
}

void loop() {

  digitalWrite(motor1ileri, HIGH);
  digitalWrite(motor1geri, LOW);
  analogWrite(hiz, 0, 125);
  delay(2000);
  digitalWrite(motor1ileri, LOW);
  digitalWrite(motor1geri, HIGH);
  analogWrite(hiz, 0, 255);
  delay(2000);
  
}
