 /******************************************************************************
 *
 * Module:	DC Motor
 * File Name: dcmotor.c
 * Description: source file for the DC Motor driver
 * Author: Ibrahim Mohamed
 *
 *******************************************************************************/


#include "dcmotor.h"

#include "timer0.h"
#include "std_types.h"

/* Timer1 Configuration */
TIMER0_ConfigType TIMER_Conf={
		PWM,
		NON_INVERTING,
		CLK8
};

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/


/*
 * Description :
 * The Function responsible for setup the direction for the two motor pins through the GPIO driver.
 * Stop at the DC-Motor at the beginning through the GPIO driver.
 */

void DcMotor_Init(void)
{
	/*	Initialize timer 1 with configurations*/
	TIMER0_init(&TIMER_Conf);

	/*
	 * set up the pins direction to be output
	 *
	 * */

	GPIO_setupPinDirection(MOTOR_PORT_ID, MOTOR_PIN1_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(MOTOR_PORT_ID, MOTOR_PIN2_ID, PIN_OUTPUT);

	/*
	 * set up the direction of motor to be zero
	 *
	 * */
	DcMotor_Rotate(STOP,0);
}


/*
 * Description :
 * set the speed and direction of the motors
 */
void DcMotor_Rotate(DcMotor_State state,uint8 speed)
{
	/*
	 * set the state of the motor according to the configuration
	 *
	 * STOP
	 * MOTOR PIN 1 -> 0000 & 0001 = 0000
	 * MOTOR PIN 2 -> 0000 & 00100 = 0000 .. shifted right one = 0000
	 * result = 00
	 *
	 * CW
	 * MOTOR PIN 1 -> 0001 & 0001 = 0001
	 * MOTOR PIN 2 -> 0001 & 0010 = 0000  ..shifted right one = 0000
	 * result = 10
	 *
	 * ACW
	 * MOTOR PIN 1 -> 0010 & 0001 = 0000
	 * MOTOR PIN 2 -> 0010 & 0010 = 0010  .. shifted right one = 0001
	 * result =01
	 *
	 * */

	GPIO_writePin(MOTOR_PORT_ID, MOTOR_PIN1_ID, state & 0x01);
	GPIO_writePin(MOTOR_PORT_ID, MOTOR_PIN2_ID, (state & 0x02) >> 1);

	/*PWM SIGNAL TO ROTATE MOTOR*/
	PWM_Timer0_Start(speed);
}
