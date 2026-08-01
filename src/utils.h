// =====================================================
//  Utility Functions Implementation
// =====================================================

#include "utils.h"
#include <Arduino.h>

void initUtils() {
  Serial.begin(9600);
}

void debugPrint(bool leftWall, bool rightWall, long frontDist) {
  Serial.print("Left: ");
  Serial.print(leftWall);
  Serial.print(" | Right: ");
  Serial.print(rightWall);
  Serial.print(" | FrontDist: ");
  Serial.println(frontDist);
}
