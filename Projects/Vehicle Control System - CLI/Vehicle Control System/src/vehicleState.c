/*
 ============================================================================
 Name        : vehicleState.c
 Author      : Ibrahim Mohamed
 Version     : 1.0
 Copyright   :
 Description : Control what happens when an option from the main menu is chosen
 ============================================================================
 */


#include "vehicleState.h"

enum states{Off, On}engineState,acState,engTempCtrlState;
enum trafficStates{R,O,G}trafficColor = R;
int cabinTemperature = 24;
int engineTemperature = 92;
int speed = 0;


/*
 * Function which is executed when the vehicle is turned On
 *
 * */

void vehicleOn(void){

    /*
     * Setting up vehicle initial states
     * */

    engineState = On;                             // turn on the engine
    acState = Off;                                // AC is initially Off

#if WITH_ENGINE_TEMP_CONTROLLER
    engTempCtrlState = Off;                       // Engine Temperature Control is initially Off
#endif

    printf("Vehicle Engine ON\n");


    while (engineState == On){
        int vehicleONChoice;                                 // user choice for this menu

        printf("1- Turn Off Engine\n");
        printf("2- Set the traffic light\n");
        printf("3- Set Room Temperature\n");

#if WITH_ENGINE_TEMP_CONTROLLER
        printf("4- Set Engine Temperature\n");
#endif


        fflush(stdout);
        scanf("%d",&vehicleONChoice);                // takes input from the user

        switch (vehicleONChoice) {
            case 1:
                vehicleOff();                               // turn off engine
                mainMenu();
                break;
            case 2:
                printf("Enter the required color: \n");
                char userColor;
                fflush(stdout);
                scanf(" %c",&userColor);   // take the required color from user
                setTrafficColor(userColor);
                printSystemMetrics();
                break;
            case 3:
                printf("Enter the room temperature: \n");
                int userCabinTemp;
                fflush(stdout);
                scanf("%d", &userCabinTemp);                    // take the required cabin temperature from user
                setCabinTemperature(userCabinTemp);
                printSystemMetrics();
                break;
#if WITH_ENGINE_TEMP_CONTROLLER
            case 4:
                printf("Enter the engine temperature: \n");
                int userEngineTemp;
                fflush(stdout);
                scanf("%d", &userEngineTemp);                    // take the required engine temperature from user
                setEngineTemperature(userEngineTemp);
                printSystemMetrics();
                break;
#endif
            default:
                printf("Invalid Input .. Please Try Again\n");

        }
    }
}


/*
 * Function which is executed when the vehicle is turned off
 *
 * */

void vehicleOff(void){
    engineState = Off;				// turn off engine
    acState = Off;					// turn off AC

#if WITH_ENGINE_TEMP_CONTROLLER
    engTempCtrlState = Off;
#endif

    printf("Vehicle Engine OFF\n");
}



void setTrafficColor(char color){
    trafficColor = color;				// set the color to user color

    switch (color) {
        case 'G':
            speed = 100;
            break;
        case 'O':
            speed = 30;
            if(acState == Off)				// turns on AC it it is not turned on
                acState = On;

#if WITH_ENGINE_TEMP_CONTROLLER

            if(engTempCtrlState == Off)
                engTempCtrlState = On;
#endif

            engineTemperature = engineTemperature * (5.0/4) + 1;		// set current temp to current temp * 1.25 + 1
            cabinTemperature = cabinTemperature * (5.0/4) + 1;			// set current engine temp to current engine temp * 1.25 + 1

            break;
        case 'R':
            speed = 0;
            break;
        default:
            printf("Invalid Input .. Try Again");
    }
}



/*
 * Function to set the temperature
 *
 * */
void setCabinTemperature(int temp){
    cabinTemperature = temp;


    // turn on AC if temperature is less than 10 or more than 30 and set it to 20
    if(temp < 10 || temp > 30){
        acState = On;
        cabinTemperature = 20;
    } else
        acState = Off;
}



#if WITH_ENGINE_TEMP_CONTROLLER
void setEngineTemperature(int  temp){
    engineTemperature = temp;

    /** turn on engine temperature controller  if engine temperature is less than 100
     *  or more than 150 and set it to 20
     * */

    if(temp < 100 || temp > 150){
        engTempCtrlState = On;
        engineTemperature = 125;
    } else
        engTempCtrlState = Off;
}
#endif



/*
 * Function to print all the system metrics
 * */

void printSystemMetrics(void){
    printf("Engine is %s\n", engineState ? "On" : "Off");
    printf("Vehicle Speed is %d Km/h\n", speed);
    printf("AC is %s\n", acState ? "On":"Off");
    printf("Cabin Temperature: %d C\n", cabinTemperature);

#if WITH_ENGINE_TEMP_CONTROLLER
    printf("Engine Temperature Controller is %s\n", engTempCtrlState? "On":"Off");
#endif

    printf("Engine Temperature: %d C\n\n", engineTemperature);

}
