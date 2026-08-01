# Exemplar Student Work  
### Maze-Solving Robot — Year 10 Computing Technology  
### Sydney Technical High School  

This document provides exemplars demonstrating Band 6-level student work for moderation and teacher reference.

---

## 1. Exemplar Wiring Diagram (ASCII)


[Battery Pack]──VIN──[Motor Driver]──OUT1──[Left Motor]
│
└──OUT2──[Left Motor]

[Arduino]──D5──IN1
[Arduino]──D6──IN2
[Arduino]──D9──IN3
[Arduino]──D10──IN4

[Ultrasonic]
TRIG──D7
ECHO──D8



---

## 2. Exemplar Flowchart










---

## 3. Exemplar Code Snippet (Band 6)

```cpp
if (!leftWallDetected()) {
    turnLeft();
} else if (getFrontDistance() < WALL_DIST) {
    turnRight();
} else {
    forward();
}
```

[IR Sensors]
Left──A1
Right──A2


## 4. Exemplar Testing Logbook Entry

Date: Week 6

Test: Left turn detection

Result: Robot failed to turn left at junction.

Cause: IR sensor threshold too high.

Fix: Recalibrated threshold from 600 → 450.

Outcome: Robot now turns correctly.


---

## 5. Exemplar Reflection (Band 6)
The most challenging part was tuning the ultrasonic sensor. 

Early tests showed inconsistent readings due to incorrect mounting height. 

After adjusting the angle and adding a small foam stabiliser, readings became reliable. 

This improved the robot’s ability to detect front walls and reduced incorrect right turns.

---
