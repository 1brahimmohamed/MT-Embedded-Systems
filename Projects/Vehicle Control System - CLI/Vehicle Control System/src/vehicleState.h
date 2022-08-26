#ifndef VEHICLE_CONTROL_SYSTEM_VEHICLESTATE_H
#define VEHICLE_CONTROL_SYSTEM_VEHICLESTATE_H

#include <stdio.h>
#include <stdbool.h>
#include "mainMenu.h"       // get functions from mainMenu file


// this file functions

void vehicleOn(void);
void vehicleOff(void);
void setTrafficColor(char color);
void setCabinTemperature(int temp);
void setEngineTemperature(int  temp);
void printSystemMetrics(void);

#endif //VEHICLE_CONTROL_SYSTEM_VEHICLESTATE_H
