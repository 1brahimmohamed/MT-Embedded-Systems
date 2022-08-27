/*
 ============================================================================
 Name        : mainMenu.c
 Author      : Ibrahim Mohamed
 Version     : 1.0
 Copyright   :
 Description : Display the Main Menu of the program
 ============================================================================
 */


#include "mainMenu.h"

/*
 * Display Main Menu for the system and takes input from the user to turn the Engine On/Off or quit the system
 * */
void mainMenu(void) {

    int menuChoice;                                 // user choice for this menu

    printf("1- Turn on Vehicle Engine\n");
    printf("2- Turn off Vehicle Engine\n");
    printf("3- Quit System\n");

    fflush(stdout);
    scanf("%d",&menuChoice);                // takes input from the user

    switch (menuChoice) {
        case 1:
            vehicleOn();                           // Turn Engine On
            break;
        case 2:
            vehicleOff();                          // Turn Engine Off
            break;
        case 3:
            printf("You Quit the System\n");
            exit(0);                                // terminate program with code 0 (0 = all is ok)
        default:
            printf("Invalid Input .. Please Try Again\n");          // if input is not valid ... retry
    }
}
