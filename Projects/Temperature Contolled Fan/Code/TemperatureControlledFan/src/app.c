 /******************************************************************************
 *
 * Module: application
 * File Name: app.c
 * Description: source file for the application
 * Author: Ibrahim Mohamed
 *
 *******************************************************************************/

#include "app.h"
#include "lcd.h"



/*
 * Description:
 * - move the cursor to the temperature display position
 * - display numbers based on their length by checking number of digits (>100)
 *
 * */
void display_Temperature(uint8 temp){

	LCD_moveCursor(1,10);
	if (temp >= 100) {
		LCD_intgerToString(temp);
	}
	else {
		LCD_intgerToString(temp);
		LCD_displayCharacter(' '); /* clear the extra character from the last display */
	}
}


/*
 * Description:
 * - move the cursor to the state display position
 * - display the state of the fan
 */

void display_FanState(uint8 on_off){

	LCD_moveCursor(0, 3);

	if(on_off){
		LCD_displayString("FAN is ON");
		LCD_displayCharacter(' '); 		/* clear the extra character from the last display */
	}
	else {
		LCD_displayString("FAN is OFF");
	}
}
