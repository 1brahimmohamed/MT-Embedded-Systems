 /******************************************************************************
 *
 * Module: main
 * File Name: main.c
 * Description: source file for the main file
 * Author: Ibrahim Mohamed
 *
 *******************************************************************************/

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "lcd.h"
#include "HC-SRO4_ultrasonic.h"

int main(void) {

	/*	initiate LCD	*/
	LCD_init();

	/*	enable global interrupts	*/
	sei();

	/*	initiate ultrasound */
	Ultrasonic_init();

	/*	display the initial text	*/
	LCD_displayString("DISTANCE=     cm");


	uint16 distance = 20;

	while(1){

		distance = Ultrasonic_readDistance(); /* read distance	*/
		LCD_moveCursor(0, 10);				/*	move cursor to the display position	*/

		/*	clear the third digit	*/
		if(distance < 100){

			LCD_displayCharacter(' ');
		}

		/*	display the distance on the LCD	*/
		LCD_intgerToString(distance);
	}

}
