// =====================================================
//  Maze-Solving Robot (Keyestudio Kit)
//  Year 10 Computing Technology – Sydney Technical HS
//  Main Control File
// =====================================================

#include "motor_control.h"
#include "sensors.h"
#include "utils.h"

void setup() {
  initMotors();
  initSensors();
  initUtils();
}

void loop() {
  // Read sensor values
  bool leftWall = leftWallDetected();
  bool rightWall = rightWallDetected();
  long frontDist = getFrontDistance();

  debugPrint(leftWall, rightWall, frontDist);

  // Left-Hand Rule Algorithm
  if (!leftWall) {
    turnLeft();
  }
  else if (frontDist < WALL_DIST) {
    turnRight();
  }
  else {
    forward();
  }

  delay(50);
}
