# Wiring Diagram

This document describes the wiring layout for the maze-solving robot.

## Motor Driver → Motors
- OUT1 → Left motor (+)
- OUT2 → Left motor (-)
- OUT3 → Right motor (+)
- OUT4 → Right motor (-)

## Motor Driver → Arduino
- IN1 → D5
- IN2 → D6
- IN3 → D9
- IN4 → D10

## Ultrasonic Sensor
- TRIG → D7
- ECHO → D8
- VCC → 5V
- GND → GND

## IR Sensors
Left IR:
- OUT → A1
- VCC → 5V
- GND → GND

Right IR:
- OUT → A2
- VCC → 5V
- GND → GND

## Power Distribution
- Battery pack → Motor driver VIN
- Motor driver 5V → Arduino 5V (if supported)
- Common GND between all components

## Sensor Placement
- Ultrasonic sensor mounted front-facing
- Left IR sensor mounted on left side
- Right IR sensor mounted on right side

Correct placement is essential for the Left-Hand Rule algorithm.
