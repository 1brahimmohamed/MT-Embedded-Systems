/*
 ============================================================================
 Name        : Problem3.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : a program for converting temperature from degrees Celsius to degrees Fahrenheit
 ============================================================================
 */

#include <stdio.h>

int main(void) {
    float tempCelsius, tempFahrenheit;

    printf("Enter the temperature you would like to convert \n");
    scanf("%f", &tempCelsius);
    tempFahrenheit = tempCelsius * (9.0f/5.0f) + 32;

    printf("Temperature in Fahrenheit is %f", tempFahrenheit);

    return 0;
}