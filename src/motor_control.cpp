// =====================================================
//  Motor Control Implementation
// =====================================================

#include "motor_control.h"
#include <Arduino.h>

// Motor driver pins
const int IN1 = 5;
const int IN2 = 6;
const int IN3 = 9;
const int IN4 = 10;

// Speed settings
int baseSpeed = 150;
int turnSpeed = 130;

void initMotors() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void forward() {
  analogWrite(IN1, baseSpeed);
  analogWrite(IN2, 0);
  analogWrite(IN3, baseSpeed);
  analogWrite(IN4, 0);
}

void turnLeft() {
  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
  analogWrite(IN3, turnSpeed);
  analogWrite(IN4, 0);
}

void turnRight() {
  analogWrite(IN1, turnSpeed);
  analogWrite(IN2, 0);
  analogWrite(IN3, 0);
  analogWrite(IN4, 0);
}

void turnAround() {
  analogWrite(IN1, turnSpeed);
  analogWrite(IN2, 0);
  analogWrite(IN3, 0);
  analogWrite(IN4, turnSpeed);
  delay(600);
}

void stopRobot() {
  analogWrite(IN1, 0);
  analogWrite(IN2, 0);
  analogWrite(IN3, 0);
  analogWrite(IN4, 0);
}
