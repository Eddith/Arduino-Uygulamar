#include <SPI.h>
#include <MFRC522.h>
#include <EEPROM.h>
#include <X113647Stepper.h>
#include <Servo.h>

int LDRpin = A0;
int ledpin = 8;
int isik_degeri;

Servo servomotor;

const int stepsPerRevolution = 32 * 32;

bool durum = false;

X113647Stepper myStepper(stepsPerRevolution, 4, 5, 6, 7);

int satir, veri;

int button = 2;

#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN); // Create MFRC522 instance.

void setup()
{
  Serial.begin(9600); // Initiate a serial communication
  SPI.begin(); // Initiate SPI bus
  mfrc522.PCD_Init(); // Initiate MFRC522
  Serial.println("Approximate your card to the reader...");
  Serial.println();
  pinMode(LDRpin, INPUT);
  pinMode(ledpin, OUTPUT);
  pinMode(button, INPUT);
  servomotor.attach(3);
  myStepper.setSpeed(1000);
  durum = false;
  satir = 1;

}
void loop()
{
  if (button == true) {
    for (int i = 0 ; i < EEPROM.length() ; i++) {
      EEPROM.write(i, 0);
    }   
  }
  isik_degeri = analogRead(LDRpin);
  isik_degeri = map(isik_degeri, 0, 1023, 0, 255);
  isik_degeri > 200 ? digitalWrite(ledpin, HIGH) : digitalWrite(ledpin, LOW);
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial())
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content = "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i]);
    EEPROM.write((i + 1), mfrc522.uid.uidByte[i]);
    content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(mfrc522.uid.uidByte[i]));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "70 139 96 245") //burada erişim izni vermek istediğiniz kartın / kartların kullanıcı kimliğini değiştirin
  {
    for (int i = 0; i < 4; i++) {
      veri = EEPROM.read(i + 1);
    }
    if (veri) {
      durum = !durum;
      if (durum == true) {
        Serial.println("Geçiş İzni verildi");
        Serial.println();
        myStepper.step(stepsPerRevolution);
        delay(5000);
        myStepper.step(-stepsPerRevolution);
        delay(2000);
        servomotor.write(0);
        delay(1000);
        Serial.println("Kapı kilitlendi kartı okutunuz");
      }
      else if (durum == false) {
        servomotor.write(90);
        myStepper.step(stepsPerRevolution);
      }
    }
    else {
      Serial.println("Gecis izni verilmedi");
    }

  }
  else {
    Serial.println("Gecersiz Kart");
    delay(3000);
  }
}
