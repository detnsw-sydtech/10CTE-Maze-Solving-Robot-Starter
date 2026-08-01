#!/bin/bash
# Style Check
# Basic formatting and indentation checks

echo "Checking code style..."

# Check for tab characters (should use spaces)
if grep -R $'\t' src/*.cpp src/*.ino >/dev/null; then
    echo "FAIL: Tabs found. Use spaces for indentation."
    exit 1
fi

# Check for trailing whitespace
if grep -R "[[:blank:]]$" src/*.cpp src/*.ino >/dev/null; then
    echo "FAIL: Trailing whitespace found."
    exit 1
fi

echo "PASS: Style checks passed."
exit 0
