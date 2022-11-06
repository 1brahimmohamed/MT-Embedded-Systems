 /******************************************************************************
 *
 * Module: Control MC
 * File Name: CTRL_Helpers.h
 * Description: HEader file for the HMI Micro-Controller Helper Functions
 * Author: Ibrahim Mohamed
 *
 *******************************************************************************/

#ifndef CONTROLHELPERS_H_
#define CONTROLHELPERS_H_

#include "buzzer.h"
#include "uart.h"
#include "dcMotor.h"
#include "std_types.h"
#include "timer1.h"
#include <util/delay.h>
#include <avr/interrupt.h>
#include "twi.h"
#include "external_eeprom.h"

/*******************************************************************************
 *                          DEFINITIONS                                        *
 *******************************************************************************/

#define CON_READY 0x10
#define HMI_READY 0x10

#define DOOR_HOLD 1
#define DOOR_OPEN 5
#define DOOR_CLOSE 5
#define BUZZER_ACTIVE 20
#define TWI_SLAVE_ADDRESS 1
#define EEPROM_DELAY 10
#define PASS_LENGTH 5
#define UART_DELAY 50

/*******************************************************************************
 *                          FUNCTIONS  DECLARATION                             *
 *******************************************************************************/
void TIMER1_CallBack(void);

void CTRL_savePassword(void);

void CTRL_unlock(void);

void CTRL_buzzerOn(void);

void CTRL_passwordCheck(void);

void CTRL_openDoor(void);

void CTRL_createPassword(void);

void CTRL_changePassword(void);

void CTRL_mainMenu(void);

#endif /* CONTROLHELPERS_H_ */
