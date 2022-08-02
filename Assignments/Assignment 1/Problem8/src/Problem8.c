/*
 ============================================================================
 Name        : Problem8.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program that reads a positive integer and checks if it is a perfect square.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 0; i <= number; i++)
    {
        if(number == i*i)
        {
            printf("%d is a perfect square", number);
            return 0;
        }
    }
    printf("%d is not a perfect square\n", number);
    return 0;
}
