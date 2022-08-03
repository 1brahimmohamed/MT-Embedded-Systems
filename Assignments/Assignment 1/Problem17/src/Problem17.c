/*
 ============================================================================
 Name        : Problem17.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program to count number of digits in a decimal number.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        n/=10;
        count++;
    }
    printf("Number Count: %d",count);
    return 0;
}
