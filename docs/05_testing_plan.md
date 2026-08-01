# Testing Plan

Testing is essential for ensuring your robot behaves correctly in the maze.

## Unit Tests
### Motor Tests
- Forward motion stable?
- Left and right turns correct?
- Turning speed appropriate?

### Sensor Tests
- IR sensors detect walls reliably?
- Ultrasonic sensor returns correct distances?

## Integration Tests
### Combined Movement + Sensors
- Robot stops before hitting a wall
- Robot turns left when left wall disappears
- Robot turns right when front wall appears

## Maze Trials
### Straight Corridor
- Robot moves forward without drifting

### Left Turn
- Robot detects no left wall and turns left

### Right Turn
- Robot detects front wall and turns right

### Dead End
- Robot performs turn-around correctly

## Debugging Checklist
- Check wiring connections
- Check sensor placement height
- Check battery voltage
- Check code logic
- Use Serial Monitor for debugging values

## Performance Metrics
- Time to exit maze
- Number of collisions
- Number of incorrect turns
