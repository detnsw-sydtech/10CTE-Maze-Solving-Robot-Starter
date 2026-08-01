#!/bin/bash
# Function Presence Test
# Ensures required functions exist in student code

echo "Checking required functions..."

REQUIRED_FUNCTIONS=(
    "forward"
    "turnLeft"
    "turnRight"
    "turnAround"
    "stopRobot"
    "getFrontDistance"
    "leftWallDetected"
    "rightWallDetected"
)

FAIL=0

for FUNC in "${REQUIRED_FUNCTIONS[@]}"; do
    if ! grep -R "$FUNC" src/*.cpp src/*.ino >/dev/null; then
        echo "Missing function: $FUNC"
        FAIL=1
    fi
done

if [ $FAIL -eq 0 ]; then
    echo "PASS: All required functions found."
    exit 0
else
    echo "FAIL: Missing required functions."
    exit 1
fi
