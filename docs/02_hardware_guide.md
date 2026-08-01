# Hardware Guide
This guide explains the hardware components used in the maze-solving robot and
how they work together.

## Microcontroller
### Keyestudio PLUS Board
The main controller of the robot.  
See: [Arduino overview](ca://s?q=Explain_Arduino_UNO)

## Motor Driver
### L298N / Keyestudio Motor Driver
Controls the two DC motors using an H-bridge circuit.  
See: [Motor driver basics](ca://s?q=Explain_H-bridge_motor_driver)

Connections:
- IN1, IN2 → Left motor control  
- IN3, IN4 → Right motor control  
- VIN → Battery pack  
- 5V → Arduino 5V (if supported)  

## Motors
### DC Motors
Provide forward, turning, and rotational movement.  
See: [DC motor basics](ca://s?q=Explain_DC_motor_basics)

## Sensors
### Ultrasonic Sensor (HC-SR04)
Used for detecting walls in front of the robot.  
See: [Ultrasonic sensor](ca://s?q=Explain_ultrasonic_sensor)

Pins:
- TRIG → D7  
- ECHO → D8  

### IR Obstacle Sensors
Used for detecting left and right walls.  
See: [IR obstacle sensor](ca://s?q=Explain_IR_obstacle_sensor)

Pins:
- LEFT_IR → A1  
- RIGHT_IR → A2  

## Power
### Battery Pack (4×AA)
Provides power to motors and microcontroller.  
See: [Robot power supply](ca://s?q=Explain_robot_power_supply)

## Wiring Discipline
- Keep wires short and tidy  
- Avoid crossing signal wires over motor power lines  
- Ensure solid connections to avoid intermittent behaviour  
