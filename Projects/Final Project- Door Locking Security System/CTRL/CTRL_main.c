 /******************************************************************************
 *
 * Module: Control MC
 * File Name: CTRL_main.c
 * Description: Source file for the CTRL Micro-Controller Main Driver File
 * Author: Ibrahim Mohamed
 *
 *******************************************************************************/

#include "CTRL_Helpers.h"


int main(void)
{
	/* Set up Configurations */

	/*UART configuration
	 * Disable Parity Bit
	 * 1 Stop Bit
	 * 8 Bits data
	 * Baud Rate of 9600
	 * */

	UART_ConfigType UART_Config={
			Parity_Disable,
			Stop_Bits_1,
			Bits_8,
			BR_9600
	};

	/*Timer1 configuration
	 *  Initial Value: 0
	 * 	Compare Value: 23437
	 * 	Pre-scaler: System Clock/1024
	 * 	Mode: Compare Mode
	 */
	Timer1_ConfigType timer1_conf={
			0,
			23437,
			CLK_1024,
			COMPARE
	};

	/*I2C configuration
	 * Slave Address
	 * Bit Rate = 2,
	 * baud rate pre-scaler = off
	 * */
	TWI_ConfigType twi_conf={
			TWI_SLAVE_ADDRESS,
			2,
			TWI_PreScaler_OFF
	};

	/*	activate the global interrupts	*/
	sei();

	/*	modules initialization	*/
	UART_init(&UART_Config);
	Timer1_setCallBack(TIMER1_CallBack); /*SET CALL BACK FUNCTION FOR TIMER*/
	Timer1_init(&timer1_conf);
	TWI_init(&twi_conf);
	Buzzer_init();
	DcMotor_Init();


	/*	Application Loop	*/
	CTRL_createPassword();

	while(1)
	{
		CTRL_mainMenu();
	}
}


