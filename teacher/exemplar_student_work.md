# Exemplar Student Work  
### Maze-Solving Robot — Year 10 Computing Technology  
### Sydney Technical High School  

This document provides exemplars demonstrating Band 6-level student work for moderation and teacher reference.

---

## 1. Exemplar Wiring Diagram (ASCII)

```mermaid
flowchart TD
    subgraph Power
        BATT[Battery Pack 4xAA]
        SW[Power Switch]
    end

    subgraph MotorDriver["Motor Driver (L298N/Keyestudio)"]
        IN1 -->|D5| ARD
        IN2 -->|D6| ARD
        IN3 -->|D9| ARD
        IN4 -->|D10| ARD
        OUT1 --> LM[Left Motor]
        OUT2 --> LM
        OUT3 --> RM[Right Motor]
        OUT4 --> RM
    end

    subgraph Arduino["Keyestudio PLUS (Arduino Uno)"]
        ARD[Arduino Board]
        TRIG[D7 TRIG]
        ECHO[D8 ECHO]
        A1[A1 Left IR]
        A2[A2 Right IR]
    end

    subgraph Sensors
        US[Ultrasonic Sensor]
        LIR[Left IR Sensor]
        RIR[Right IR Sensor]
    end

    BATT --> SW --> MotorDriver
    MotorDriver -->|5V| Arduino
    MotorDriver -->|GND| Arduino

    US --> TRIG
    US --> ECHO
    LIR --> A1
    RIR --> A2
```

---

## 2. Exemplar State Machine Diagram (Left‑Hand Rule Logic)

```mermaid
stateDiagram-v2
    [*] --> ReadSensors

    ReadSensors --> NoLeftWall: leftWall == false
    ReadSensors --> FrontBlocked: frontDist < WALL_DIST
    ReadSensors --> Forward: leftWall == true && frontDist >= WALL_DIST

    NoLeftWall --> TurnLeft
    TurnLeft --> ReadSensors

    FrontBlocked --> TurnRight
    TurnRight --> ReadSensors

    Forward --> ReadSensors

    ReadSensors --> DeadEnd: leftWall == true && rightWall == true && frontDist < WALL_DIST
    DeadEnd --> TurnAround
    TurnAround --> ReadSensors
```

## 3. Exemplar Flowchart

```mermaid
flowchart TD
    A([Start]) --> B[Read Sensors]

    B --> C{Left wall present?}
    C -->|No| D[Turn Left]
    C -->|Yes| E{Front wall present?}

    E -->|Yes| F[Turn Right]
    E -->|No| G[Move Forward]

    F --> B
    G --> B
    D --> B
```

---

## 4. Exemplar Code Snippet (Band 6)

```cpp
if (!leftWallDetected()) {
    turnLeft();
} else if (getFrontDistance() < WALL_DIST) {
    turnRight();
} else {
    forward();
}
```

## 5. Exemplar Testing Logbook Entry

Date: Week 6

Test: Left turn detection

Result: Robot failed to turn left at junction.

Cause: IR sensor threshold too high.

Fix: Recalibrated threshold from 600 → 450.

Outcome: Robot now turns correctly.


---

## 6. Exemplar Reflection (Band 6)
The most challenging part was tuning the ultrasonic sensor. 

Early tests showed inconsistent readings due to incorrect mounting height. 

After adjusting the angle and adding a small foam stabiliser, readings became reliable. 

This improved the robot’s ability to detect front walls and reduced incorrect right turns.

---
