/*
 ============================================================================
 Name        : Problem5.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C function to check if the input is an even number or an odd number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int isOdd(int number);

int main(void) {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(isOdd(num) ==1)
        printf("The number is Odd");
    else
        printf("The number is even");

    return 0;
}

int isOdd(int number){
    if(number%2 != 0)
        return 1;
    else return 0;
}
