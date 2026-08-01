// =====================================================
//  Sensor Header
// =====================================================

#ifndef SENSORS_H
#define SENSORS_H

void initSensors();
long getFrontDistance();
bool leftWallDetected();
bool rightWallDetected();

#define WALL_DIST 15   // cm threshold

#endif
