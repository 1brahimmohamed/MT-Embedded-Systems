#include "initials.h"


void initalize7Segments(void){

	// set the direction of first 4 bits in PORT C to output
	DDRC = 0x0F;

	// initialize the bits with 0 (as 7 segments is common anode which means its high with zero )
	PORTC &= 0xF0;

	// set the direction of the first 6 pins in PORT A to output
	DDRA = 0x3F;

	// initialize the bits with high logic
	PORTA = 0xFF;
}

void InitialzieTimer1CompareMode(void){

	TCCR1A = (1<<COM1A0) | (1<<FOC1A);
	TCCR1B = (1<<CS10) | (1<<CS12) | (1<<WGM12);

	// set timer initial value to zero
	TCNT1 = 0;

	// set timer compare value to 977 (based on calculations)
	OCR1A = 997;

	// Enable the global interrupts
	SREG = (1<<7);

	// enable module interrupt
	TIMSK |= (1<<OCIE1A);

}

void DISPLAY (char num){

	PORTC = num;
}
