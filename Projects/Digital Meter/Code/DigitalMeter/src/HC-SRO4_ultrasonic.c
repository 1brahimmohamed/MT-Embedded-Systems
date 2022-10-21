 /******************************************************************************
 *
 * Module: HC-SRO4 Ultrasonic
 * File Name: HC-SRO4_ultrasonic.c
 * Description: Source file for the HC-SR04 Ultrasonic driver
 * Author: Ibrahim Mohamed
 *
 *******************************************************************************/

#include <util/delay.h>
#include "gpio.h"
#include "common_macros.h"
#include "HC-SRO4_ultrasonic.h"
#include "icu.h"


/*******************************************************************************
 *                              Global Functions	                           *
 *******************************************************************************/


static uint16 g_echo = 0;
static uint8 g_countOfEdges = 0;

/*******************************************************************************
 *                              Functions Definition                          *
 *******************************************************************************/


/*
 * Description :
 *  Initialize the ICU driver.
 *  Setup the ICU call back function.
 *  Setup the direction for the trigger pin as output pin through the GPIO driver.
 */
void Ultrasonic_init(void){

   /*
	* set up the configurations to the ICU unit to work with:
	* - the processor frequency over 8
	* - capture the rising edge of the pluse
	*
	*/
	Icu_ConfigType ICU_configuration = {
			F_CPU_8,
			RISING
	};


	/*	initialize the ICU with configurations	*/
	Icu_init(&ICU_configuration);

	/*	 set the callback function which will calculate the time	*/
	Icu_setCallBack(Ultrasonic_edgeProcessing);

	/*	set up the trigger port to be output	*/
	GPIO_setupPinDirection(ULTRASONIC_TRIGGER_PORT, ULTRASONIC_TRIGGER_PIN, PIN_OUTPUT);
}

/*
 * Description :
 * Send the Trigger pulse to the ultrasonic.
 */
void Ultrasonic_Trigger(void){

	GPIO_writePin(ULTRASONIC_TRIGGER_PORT, ULTRASONIC_TRIGGER_PIN, LOGIC_HIGH);
	_delay_ms(1);
	GPIO_writePin(ULTRASONIC_TRIGGER_PORT, ULTRASONIC_TRIGGER_PIN, LOGIC_LOW);

}

/*
 * Description :
 *  Send the trigger pulse by using Ultrasonic_Trigger function.
 *  Start the measurements by the ICU from this moment.
 */
uint16 Ultrasonic_readDistance(void){

	/*	send trigger signal	*/
	Ultrasonic_Trigger();

	/*	polling	*/
	while(g_countOfEdges != 2);

	g_countOfEdges = 0;
	return g_echo/58.8;		/*	return the distance */

}

/*
 * Description :
 * This is the call back function called by the ICU driver.
 * This is used to calculate the high time (pulse time) generated by the ultrasonic sensor.
 */
void Ultrasonic_edgeProcessing(void){

	g_countOfEdges++;

	if(g_countOfEdges == 1){

		/*	Clear the timer counter register	*/
		Icu_clearTimerValue();
		/* change the edge detection to be falling edge */
		Icu_setEdgeDetectionType(FALLING);
	}

	else if(g_countOfEdges == 2){

		/* get the high time */
		g_echo = Icu_getInputCaptureValue();

		/* Clear the timer counter register	*/
		Icu_clearTimerValue();

		/* change the edge detection to be rising edge */
		Icu_setEdgeDetectionType(RISING);

	}
}
