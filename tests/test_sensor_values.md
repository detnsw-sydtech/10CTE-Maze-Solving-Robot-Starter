# Sensor Values Test
See: [Ultrasonic sensor](ca://s?q=Explain_ultrasonic_sensor)
See: [IR obstacle sensor](ca://s?q=Explain_IR_obstacle_sensor)

## Purpose
Verify that your sensors return correct values.

## Requirements
- `getFrontDistance()` returns realistic cm values
- `leftWallDetected()` returns true when left wall present
- `rightWallDetected()` returns true when right wall present

## Manual Test Procedure
1. Open Serial Monitor.
2. Move robot near walls.
3. Observe printed values.

## Pass Criteria
Sensor readings match physical environment.
