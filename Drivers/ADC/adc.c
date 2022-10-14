/*
 * ADC.c
 *
 *  Created on: Oct 4, 2022
 *      Author: I1bra
 */



#include<avr/io.h>
#include "common_macros.h"
#include "gpio.h"
#include "lcd.h"


void ADC_init(void){
	SET_BIT(ADMUX,REFS0);		// Select AREF
	CLEAR_BIT(ADMUX,REFS1);


	SET_BIT(ADCSRA,ADEN);			// module enable
	CLEAR_BIT(ADCSRA,ADIE);			// disable interrupts

	/*	set the prescaler 	*/
	SET_BIT(ADCSRA,ADPS2);
	SET_BIT(ADCSRA,ADPS1);
	SET_BIT(ADCSRA,ADPS0);
}

uint16 ADC_readChannel(uint8 ch_num){

	// insert ch -> ADMUX

	ch_num &= 0x07; /* Input channel number must be from 0 --> 7 */
	ADMUX &= 0xE0; /* Clear first 5 bits in the ADMUX (channel number MUX4:0 bits) before set the required channel */
	ADMUX = ADMUX | ch_num; /* Choose the correct channel by setting the channel number in MUX4:0 bits */

	// start conv
	SET_BIT(ADCSRA,ADSC);

	// polling
	while(BIT_IS_CLEAR(ADCSRA,ADIF)); /* Wait for conversion to complete, ADIF becomes '1' */

	// clear flag
	SET_BIT(ADCSRA,ADIF);

	return ADC;


}
