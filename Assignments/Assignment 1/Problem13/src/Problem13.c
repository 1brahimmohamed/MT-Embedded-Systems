/*
 ============================================================================
 Name        : Problem13.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program that reads a positive integer and checks if it is a prime
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, count;
    printf("Please Enter the number you would like to check: ");
    scanf("%d", &num);

    for (int i = 2; i <= num/2 ; ++i) {
        if(num%i == 0)
            count++;
    }

    if(count == 0)
        printf("Its prime number");
    else
        printf("It is not a prime number");


	return 0;
}
