 /******************************************************************************
 *
 * Module: main
 * File Name: main.c
 * Description: source file for the main file
 * Author: Ibrahim Mohamed
 *
 *******************************************************************************/

#include "app.h"
#include "lcd.h"
#include "gpio.h"
#include "adc.h"
#include "dcmotor.h"
#include "lm35_sensor.h"
#include "common_macros.h"

 int main(void){

	 /*
	  * set up the configuration for the ADC by setting:
	  * - the voltage to the internal 2.56 v
	  *	- the prescaler to process / 8
	  * */

	ADC_ConfigType config = {
			INTERNAL_VOLTAGE,
			F_CPU_8
	};


	/*	initialize LCD 	*/
	LCD_init();

	/*	initialize ADC with configurations	*/
	ADC_init(&config);

	/*	initialize the DC motor	*/
	DcMotor_Init();

	/*
	 * move the cursor of the LCD to middle of the screen to display
	 * the "Temp = 	C" statement
	 *
	 * then display it
	 * */
	LCD_moveCursor(1, 3);
	LCD_displayString("Temp =    C");

	uint8 temperature;

	while(1){

		temperature = LM35_getTemperature(); 	/*	read temperature from the LM35 temperature sensor */

		if(temperature < 30){
			display_FanState(OFF);				/*	display OFF state		*/
			display_Temperature(temperature);	/*	display temperature		*/
			DcMotor_Rotate(STOP, 0);			/*	stop the fan motor		*/
		}

		else if(temperature >= 30 && temperature < 60){
			display_FanState(ON);				/*	display ON state		*/
			display_Temperature(temperature);	/*	display temperature		*/
			DcMotor_Rotate(CW, 25);	            /*	fan motor operates by 25% of its full speed (CW: Clockwise direction)	*/
		}

		else if(temperature >= 60 && temperature < 90 ){
			display_FanState(ON);				/*	display ON state		*/
			display_Temperature(temperature);	/*	display temperature		*/
			DcMotor_Rotate(CW, 50);				/*	fan motor operates by 50% of its full speed	(CW: Clockwise direction) */
		}

		else if(temperature >= 90 && temperature < 120 ){
			display_FanState(ON);				/*	display ON state		*/
			display_Temperature(temperature);	/*	display temperature		*/
			DcMotor_Rotate(CW, 75);				/*	fan motor operates by 75% of its full speed	(CW: Clockwise direction) */
		}
		else if(temperature >= 120){
			display_FanState(ON);				/*	display ON state		*/
			display_Temperature(temperature);	/*	display temperature		*/
			DcMotor_Rotate(CW, 100);			/*	fan motor operates by 100% of its full speed (CW: Clockwise direction)	*/
		}
	}

	return 0;
}
