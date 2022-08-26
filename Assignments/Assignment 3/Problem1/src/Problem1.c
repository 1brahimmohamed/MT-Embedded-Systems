/*
 ============================================================================
 Name        : Problem1.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C Function that prints the cube of any number
 ============================================================================
 */

#include <stdio.h>

int cubeOfNumber(int num);

int main(void) {
    int num1;
	printf("Please enter the number: ");
    scanf("%d",&num1);

    printf("The cube of number is %d", cubeOfNumber(num1));
	return 0;
}

int cubeOfNumber(int num){
    return num*num*num;
}
