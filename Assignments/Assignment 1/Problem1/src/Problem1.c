/*
 ============================================================================
 Name        : Problem1.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program that take two integers from the user and print the results of this equation:
                Result = ((num1 + num2) * 3) – 10
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1 = 0 , num2 = 0 , result = 0;
	printf("Please Enter 2 Numbers \n");
    scanf("%d %d",&num1,&num2); /* take inputs from user */
    result = ((num1 + num2) * 3) - 10;
    printf("The result is %d \n", result);
	return 0;
}
