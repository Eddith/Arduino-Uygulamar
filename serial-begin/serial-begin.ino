int sayi=25;
void setup() {
  Serial.begin(9600);

}

void loop() {
  String name=(String)sayi; // Convert etmek 
  Serial.print("Deger= ");
  Serial.println(sayi);
  delay(1000000);

}
