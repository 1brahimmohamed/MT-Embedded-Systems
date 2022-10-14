/*
 * ADC.h
 *
 *  Created on: Oct 4, 2022
 *      Author: I1bra
 */

#ifndef ADC_H_
#define ADC_H_

#include "std_types.h"

void ADC_init(void);
uint16 ADC_readChannel(uint8 ch_num);


#endif /* ADC_H_ */
