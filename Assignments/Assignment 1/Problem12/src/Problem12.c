/*
 ============================================================================
 Name        : Problem12.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program that reads a positive integer and computes the factorial
 ============================================================================
 */

#include <stdio.h>

int main(void) {
    int num, factorial = 1;
    printf("Please Enter the number you would like to compute: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    printf(" The factorial is %d", factorial);

	return 0;
}
