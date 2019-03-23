int motor1ileri=8;
int motor1geri=9;
void setup() {
  pinMode(motor1ileri, OUTPUT);
  pinMode(motor1geri, OUTPUT);
}

void loop() {

  digitalWrite(motor1ileri, HIGH);
  digitalWrite(motor1geri, LOW);
  delay(2000);
  digitalWrite(motor1ileri, LOW);
  digitalWrite(motor1geri, HIGH);
  delay(2000);
  
}
