#!/bin/bash
# Compilation Test
# Ensures student code compiles using Arduino CLI

echo "Checking compilation..."

arduino-cli compile --fqbn arduino:avr:uno src/robot_maze_solver.ino

if [ $? -eq 0 ]; then
    echo "PASS: Code compiles successfully."
    exit 0
else
    echo "FAIL: Code does not compile."
    exit 1
fi
