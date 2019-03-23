int led=13;
int button=12;
int buton_durum = 0;


void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
 
  
}

void loop() {

  buton_durum = digitalRead(button);

  if(buton_durum == 1){
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  

}
