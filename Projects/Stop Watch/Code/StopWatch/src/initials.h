/*
 * initials.h
 *
 *  Created on: Sep 20, 2022
 *      Author: Ibrahim
 */

#ifndef SRC_INITIALS_H_
#define SRC_INITIALS_H_

#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>

void initalize7Segments(void);
void initialzieTimer1CompareMode(void);
void initializeResetBtn(void);
void initializeResumeBtn(void);
void initializePauseBtn(void);

#endif /* SRC_INITIALS_H_ */
