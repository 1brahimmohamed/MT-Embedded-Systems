# C Programming Project - Vehicle Control System

- [Introduction](#introduction)
- [Description](#description)
- [Operation](#operation)
- [File Structure](#file-structure)

### Introduction
The Vehicle Control System lets you control speed, cabin temperature, engine temperature using 
engine temperature controller if installed.


### Operation
the system asks user if he/she wants to
- Turn on the vehicle engine
- Turn off the vehicle engine
- Quit the system


> If the user chose to “Quit the system” then the program quits (the only way the program can quit).

>If the user chose to "Turn off the vehicle engine", the below menu should be shown to him.

> If the user chose to “Turn on the vehicle engine”,  Sensors Set Menu is displayed. 

This Sensors Set Menu simulates the vehicle sensors readings as if it was taken from sensors
like temperature sensor & engine temperature sensor or image processing units for the traffic lights and signs.
The Sensor Set Menu
```
a. Turn off the engine
b. Set the traffic light color.
c. Set the room temperature (Temperature Sensor)
d. Set the engine temperature (Engine Temperature Sensor)
```

While the engine is ON, Sensor Set Menu is always displayed and waits for an answer.

#### Based on the answer of requirement 6.
 
A. Based on traffic light data (Take it as input from console, we will assume that this is the sensor read value)

1. If the traffic light is ‘G’ set vehicle speed to 100 km/hr
2. If the traffic light is ‘O’ set vehicle speed to 30 km/hr
3. If the traffic light is ‘R’ set vehicle speed to 0 km/h

B. Based on room temperature data (Take it as input from console, we will assume that this is the sensor read value)

1. If temperature less than 10, Turn AC ON and set temperature to 20
2. If temperature is greater than 30, Turn AC ON and set temperature to 20
3. If temperature is otherwise, Turn AC OFF

C, Based on engine temperature data (Take it as input from console, we will assume that this is the sensor read value)

1. If temperature less than 100, Turn “Engine Temperature Controller” ON and set temperature to 125
2. If temperature is greater than 150, Turn “Engine Temperature Controller” ON and set temperature to 125
3. If temperature is otherwise, Turn “Engine Temperature Controller” OFF


#### If vehicle speed is 30 km/hr
1. Turn ON AC if it was OFF and set room temperature to: current temperature * (5/4) + 1
2. Turn ON “Engine Temperature Controller” if it was OFF and set engine temperature to: current temperature * (5/4) + 1

#### After any operation the system prints the system metrics
```
Engine state: ON/OFF
AC: ON/OFF
Vehicle Speed
Room Temperature
Engine Temperature Controller State
Engine Temperature
```

### File Structure
- Debug
- src
  - `main.c`
  - `main.h`
  - `mainMenu.c`
  - `mainMenu.h`
  - `vehicleState.c`
  - `vehicleState.h`
- CMakeLists.txt
- README.md

### Description
`main` file is the entry point to the program which automatically calls mainMenu.

`mainMenu` file prints out the main menu for the program and takes input to decide what to do.

`vehicleState` controls what happens when what is input.

