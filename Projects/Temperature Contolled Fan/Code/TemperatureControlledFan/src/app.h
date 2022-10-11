 /******************************************************************************
 *
 * Module: application
 * File Name: app.h
 * Description: source file for the application
 * Author: Ibrahim Mohamed
 *
 *******************************************************************************/

#ifndef SRC_APP_H_
#define SRC_APP_H_

#include "std_types.h"

/*******************************************************************************
 *                                Configurations                               *
 *******************************************************************************/

#define OFF 	0
#define ON 		1

/*******************************************************************************
 *                              Functions Prototypes                           *
 *******************************************************************************/

/*
 * Description:
 * - move the cursor to the temperature display position
 * - display numbers based on their length by checking number of digits (>100)
 *
 * */

void display_Temperature(uint8 temp);


/*
 * Description:
 * - move the cursor to the state display position
 * - display the state of the fan
 */
void display_FanState(uint8 on_off);



#endif /* SRC_APP_H_ */
