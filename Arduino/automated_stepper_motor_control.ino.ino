#include <Arduino.h>
#include "A4988.h"

#define MOTOR_STEPS 200
#define HALL 9
#define IGN 10
#define DIR 11
#define STEP 12

int ignPinState = LOW;
int dispPinState = LOW;  

A4988 stepper(MOTOR_STEPS, DIR, STEP);

void setup() {
    delay(1000);
    stepper.begin(80, 1);
    stepper.enable();
    Serial.begin(9600);
    pinMode(IGN, INPUT);
    pinMode(HALL, INPUT);

    ignPinState = digitalRead(IGN);
    dispPinState = digitalRead(HALL);

    if (ignPinState == HIGH && dispPinState == LOW) 
    {
      delay(1000);
      openDisplay();
    }
}

void loop() { 
  ignPinState = digitalRead(IGN);
  dispPinState = digitalRead(HALL);

  if (ignPinState == LOW && dispPinState == HIGH) 
  {
    delay(2000);
    closeDisplay();
  }
}

void openDisplay() {
  stepper.move(650);
}

void closeDisplay() {
  stepper.move(-650);
}

