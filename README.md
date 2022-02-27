# Mobile Radio Visualization
Draw simple moving radio nodes based on given scenario file.

## Scenario File Format

```
# Comments should be started with "#"
# Empty Lines are ignored

# Command for adding a new radio node
#  AddNode NAME X Y {circle|square} Color

AddNode mynode 300.0 410 circle red
AddNode othernode 100 80.5 square gray

# Command for node movement
# SetNodeSpeed TIME NODE-NAME VX VY

SetNodeSpeed 3.5 mynode -10.5 0.5
# In this example @ time=3.5sec move set speed of mynode to vx=-10 and vy=0.5

# Set End of Simulation Time
# SimEnd TIME
SimEnd 40    # End the simulation afte 40 seconds if is not given consider 60sec as default

# Command for set maximum communication range
SetMaxRadioRange 130.0




```


## How To Compile
1. Import project in Eclipse/CDT.
2. Compile with ctrl+B
3. Run
4. Enjoy!

Based on : https://github.com/raysan5/raylib
