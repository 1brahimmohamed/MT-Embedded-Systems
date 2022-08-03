/*
 ============================================================================
 Name        : Problem16.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program to reverse a number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, reverse=0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    printf("Reversed Number: %d",reverse);
    return 0;
}
