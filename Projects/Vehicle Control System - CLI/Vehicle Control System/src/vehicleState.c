/*
 ============================================================================
 Name        : vehicleState.c
 Author      : Ibrahim Mohamed
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Control what happens when an option from the main menu is chosen
 ============================================================================
 */


#include "vehicleState.h"

enum states{Off, On}engineState,acState,engTempCtrlState;
enum trafficStates{R,O,G}trafficColor = R;
int cabinTemperature = 24;
int engineTemperature = 92;
int speed = 0;

void vehicleOn(void){

    /*
     * Setting up vehicle initial states
     * */

    engineState = On;                             // turn on the engine
    acState = Off;                                // AC is initially Off
    engTempCtrlState = Off;                       // Engine Temperature Control is initially Off

    printf("Vehicle Engine ON\n");


    while (engineState == On){
        int vehicleONChoice;                                 // user choice for this menu

        printf("1- Turn Off Engine\n");
        printf("2- Set the traffic light\n");
        printf("3- Set Cabin Temperature\n");
        printf("4- Set Engine Temperature\n");

        scanf("%d",&vehicleONChoice);                // takes input from the user

        switch (vehicleONChoice) {
            case 1:
                vehicleOff();                               // turn off engine
                mainMenu();
                break;
            case 2:
                printf("Enter the required color: \n");
                char userColor;
                scanf(" %c",&userColor);   // take the required color from user
                setTrafficColor(userColor);
                printSystemMetrics();
                break;
            case 3:
                printf("Enter the required cabin temperature: \n");
                int userCabinTemp;
                scanf("%d", &userCabinTemp);                    // take the required cabin temperature from user
                setCabinTemperature(userCabinTemp);
                printSystemMetrics();
                break;
            case 4:
                printf("Enter the required engine temperature: \n");
                int userEngineTemp;
                scanf("%d", &userEngineTemp);                    // take the required engine temperature from user
                setEngineTemperature(userEngineTemp);
                printSystemMetrics();
                break;
            default:
                printf("Invalid Input .. Please Try Again\n");

        }
    }
}

void vehicleOff(void){
    engineState = Off;
    acState = Off;
    engTempCtrlState = Off;
    printf("Vehicle Engine OFF\n");
}


void setTrafficColor(char color){
    trafficColor = color;

    switch (color) {
        case 'G':
            speed = 100;
            break;
        case 'O':
            speed = 30;
            break;
        case 'R':
            speed = 0;
            break;
        default:
            printf("Invalid Input .. Try Again");
    }
}

void setCabinTemperature(int temp){
    cabinTemperature = temp;
    if(temp < 10 || temp > 30){
        acState = On;
        cabinTemperature = 20;
    } else
        acState = Off;
}

void setEngineTemperature(int  temp){
    engineTemperature = temp;
    if(temp < 100 || temp > 150){
        engTempCtrlState = On;
        engineTemperature = 125;
    } else
        engTempCtrlState = Off;
}

void printSystemMetrics(void){
    printf("Engine is %s\n", engineState ? "On" : "Off");
    printf("Vehicle Speed is %d Km/h\n", speed);
    printf("AC is %s\n", acState ? "On":"Off");
    printf("Cabin Temperature: %d C\n", cabinTemperature);
    printf("Engine Temperature Controller is %s\n", engTempCtrlState? "On":"Off");
    printf("Engine Temperature: %d C\n\n", engineTemperature);
}