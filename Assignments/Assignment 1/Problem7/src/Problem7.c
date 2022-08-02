/*
 ============================================================================
 Name        : Problem7.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program that takes three integers, and prints out the smallest number.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1, num2, num3, minNum;

    printf("Enter the 3 Numbers: ");
    scanf("%d%d%d", &num1, &num2,&num3);
    minNum = num1;

    if (num1 > num2)
        minNum = num2;
    if (num2 > num3)
        minNum = num3;

    printf("The Smallest Number is: %d", minNum);
	return 0;
}
