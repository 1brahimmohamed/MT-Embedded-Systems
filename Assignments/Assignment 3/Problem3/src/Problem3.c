/*
 ============================================================================
 Name        : Problem3.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C Function that check if the number if positive or negative.
 ============================================================================
 */

#include <stdio.h>
int isPositive(int number);

int main(void) {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(isPositive(num) ==1)
        printf("The number is positive");
    else
        printf("The number is negative");

    return 0;
}

int isPositive(int number){
    if(number >= 0)
        return 1;
    else return 0;
}