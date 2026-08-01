// =====================================================
//  Sensor Implementation
// =====================================================

#include "sensors.h"
#include <Arduino.h>

// Ultrasonic pins
const int TRIG = 7;
const int ECHO = 8;

// IR sensors
const int LEFT_IR = A1;
const int RIGHT_IR = A2;

void initSensors() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LEFT_IR, INPUT);
  pinMode(RIGHT_IR, INPUT);
}

long getFrontDistance() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH);
  return duration * 0.034 / 2;  // convert to cm
}

bool leftWallDetected() {
  return digitalRead(LEFT_IR) == HIGH;
}

bool rightWallDetected() {
  return digitalRead(RIGHT_IR) == HIGH;
}
