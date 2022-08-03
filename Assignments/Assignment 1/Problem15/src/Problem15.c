/*
 ============================================================================
 Name        : Problem15.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, pow, result = 1;

    printf("Please Enter the number and the power respectively: ");
    scanf("%d %d", &num, &pow);

    for (int i = 0; i < pow; ++i) {
        result *= num;
    }
    printf("The result is: %d", result);
}
