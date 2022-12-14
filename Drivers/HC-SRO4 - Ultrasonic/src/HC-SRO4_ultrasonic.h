 /******************************************************************************
 *
 * Module: HC-SRO4 Ultrasonic
 * File Name: HC-SRO4_ultrasonic.h
 * Description: Header file for the HC-SR04 Ultrasonic driver
 * Author: Ibrahim Mohamed
 *
 *******************************************************************************/


#ifndef SRC_DRIVERS_HC_SRO4_ULTRASONIC_H_
#define SRC_DRIVERS_HC_SRO4_ULTRASONIC_H_


#include "std_types.h"

/*******************************************************************************
 *                                Configurations                               *
 *******************************************************************************/

#define ULTRASONIC_TRIGGER_PORT		PORTB_ID
#define ULTRASONIC_TRIGGER_PIN		PIN5_ID

#define ULTRASONIC_ECHO_PORT		PORTD_ID
#define ULTASONIC_EHCO_PIN			PIN6_ID


/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/


/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/

/*
 * Description :
 *  Initialize the ICU driver.
 *  Setup the ICU call back function.
 *  Setup the direction for the trigger pin as output pin through the GPIO driver.
 */
void Ultrasonic_init(void);

/*
 * Description :
 * Send the Trigger pulse to the ultrasonic.
 */
void Ultrasonic_Trigger(void);

/*
 * Description :
 *  Send the trigger pulse by using Ultrasonic_Trigger function.
 *  Start the measurements by the ICU from this moment.
 */
uint16 Ultrasonic_readDistance(void);

/*
 * Description :
 * This is the call back function called by the ICU driver.
 * This is used to calculate the high time (pulse time) generated by the ultrasonic sensor.
 */
void Ultrasonic_edgeProcessing(void);


#endif /* SRC_DRIVERS_HC_SRO4_ULTRASONIC_H_ */
