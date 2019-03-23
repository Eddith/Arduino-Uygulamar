#include <Stepper.h>

const int stepadim=200;

Stepper stepmotor(stepadim,8,9,10,11);

void setup() {
  stepmotor.setSpeed(60);
}

void loop() {
  stepmotor.step(200);
  delay(500);
  stepmotor.step(-200);
  delay(500);
}
