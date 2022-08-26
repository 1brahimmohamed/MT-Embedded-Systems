/*
 ============================================================================
 Name        : Problem13.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : function to add two floating numbers. Determine the integer floor of the sum
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int floorSumOfNumbers(float num1, float num2);

int main(void) {
    float num1, num2;
    printf("Please Enter the numbers you would like to add: ");
    scanf("%f%f", &num1, &num2);

    printf("The floor of sum is: %d", floorSumOfNumbers(num1,num2));
	return 0;
}

int floorSumOfNumbers(float num1, float num2){
    float sum = num1 + num2;
    return floor(sum);
}