int dizi[]={3,5,7,8,9};
void setup() {
  Serial.begin(9600);
}

void loop() {
  for(int i=0; i<5; i++){
    Serial.println(dizi[i]);
  }
  delay(100000000);
  
}
