# Algorithm Design: Left-Hand Rule Maze Solving

## Overview
The robot uses the **Left-Hand Rule**, a deterministic maze-solving algorithm.
See: [Left-Hand Rule](ca://s?q=Explain_left_hand_rule_maze)

The robot always attempts to keep its left side against a wall. This guarantees
escape from any simply connected maze.

## Sensor Logic
- **Left IR sensor** detects left wall  
- **Right IR sensor** detects right wall  
- **Ultrasonic sensor** detects front wall  

## Decision Rules
1. If **no left wall** → turn left  
2. Else if **front wall detected** → turn right  
3. Else → move forward  
4. If **dead end** → turn around  

## State Machine
States:
- `FORWARD`
- `TURN_LEFT`
- `TURN_RIGHT`
- `TURN_AROUND`

Transitions:
- Based on sensor readings  
- Deterministic and repeatable  

## Pseudocode

```
loop:
read leftWall
read rightWall
read frontDist

if leftWall == false:
turnLeft()
else if frontDist < WALL_DIST:
turnRight()
else:
forward()
```


## Flowchart
(Students draw this in their portfolio)

Start → Check left wall →  
- No left wall → Turn left  
- Left wall + front clear → Forward  
- Left wall + front blocked → Turn right  
- Dead end → Turn around  
→ Repeat  
