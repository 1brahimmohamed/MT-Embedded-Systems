/*
 * main.c
 *
 *  Created on: Sep 20, 2022
 *      Author: I1bra
 */

#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
#include"initials.h"

char sec;
char min;
char hrs;

ISR(TIMER1_COMPA_vect){

	/*
	 * every time the timer gives an interrupt increment seconds
	 * this is because we adjusted our calculations to make it gives an interrupt every second
	 */
	sec++;

	// if the seconds counter became 60 increment a minute
	if (sec == 60) {
		sec = 0;
		min++;
	}

	// if the minutes counter became 60 increment an hour
	if (min == 60) {
		sec = 0;
		min = 0;
		hrs++;
	}

	// if the hours counter became 24 reset the clock
	if (hrs == 24) {
		sec = 0;
		min = 0;
		hrs = 0;
	}

}


int main(void){

	sec = 0;
	min = 0;
	hrs = 0;

	initalize7Segments();
	InitialzieTimer1CompareMode();

	while(1){
				PORTA = (1<<0);
				DISPLAY(sec % 10);
				_delay_ms(3);

				PORTA = (1<<1);
				DISPLAY(sec / 10);
				_delay_ms(3);

				PORTA = (1<<2); //
				DISPLAY(min % 10);
				_delay_ms(3);

				PORTA = (1<<3);
				DISPLAY(min / 10);
				_delay_ms(3);

				PORTA = (1<<4);
				DISPLAY(hrs % 10);
				_delay_ms(3);

				PORTA = (1<<5);
				DISPLAY(hrs / 10);
				_delay_ms(3);
	}
}
