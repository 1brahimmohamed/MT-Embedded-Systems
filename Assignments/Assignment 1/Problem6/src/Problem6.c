/*
 ============================================================================
 Name        : Problem6.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program that print the relation between two integer number if those numbers are equal, not equal and
                which one contain the higher value.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2;
    printf("Enter the 2 Numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
        printf("Number 1 is Greater than Number 2");
    else if (num1 == num2)
        printf("Number 1 is equal to Number 2");
    else
        printf("Number 2 is Greater than Number 1");

    return 0;
}
