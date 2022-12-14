 /******************************************************************************
 *
 * Module: Temperature Sensor
 * File Name: lm35_sensor.h
 * Description: source file for the LM35 Temperature Sensor driver
 * Author: Ibrahim Mohamed
 *
 *******************************************************************************/

#include "lm35_sensor.h"
#include "adc.h"


/*******************************************************************************
 *                              Functions Definition                          *
 *******************************************************************************/


/*
 * Description :
 * Function responsible for calculate the temperature from the ADC digital value.
 */

uint8 LM35_getTemperature(void)
{
	uint8 temperature = 0;

	uint16 adc_value = 0; /*	readed value from ADC	*/

	/* Read ADC channel where the temperature sensor is connected */
	adc_value = ADC_readChannel(SENSOR_CHANNEL_ID);

	/* Calculate the temperature from the ADC value*/
	temperature = (uint8)(((uint32)adc_value*SENSOR_MAX_TEMPERATURE*ADC_REF_VOLT_VALUE)/(ADC_MAXIMUM_VALUE*SENSOR_MAX_VOLT_VALUE));

	return temperature;
}

