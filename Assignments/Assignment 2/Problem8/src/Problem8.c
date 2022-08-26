/*
 ============================================================================
 Name        : Problem8.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C Function that display Prime Numbers between Intervals (two numbers).
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int isPrime(int num);
void displayPrime(int rInit, int rEnd);

int main(void) {
    int intStart,intEnd;
    printf("Enter the interval: ");
    scanf("%d%d", &intStart, &intEnd);
    displayPrime(intStart,intEnd);
    return 0;
}


void displayPrime(int rInit, int rEnd){
    for (int i = rInit; i <= rEnd; ++i) {
        if(isPrime(i) == 1)
            printf("%d\n", i);
    }
}

int isPrime(int num){
    int count = 0;
    for (int i = 2; i <= num/2 ; ++i) {
        if(num%i == 0)
            count++;
    }

    if(count == 0)
        return 1;
    else return 0;
}
