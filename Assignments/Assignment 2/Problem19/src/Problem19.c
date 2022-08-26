/*
 ============================================================================
 Name        : Problem19.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C function that return 0 if a given number is a power of 3, otherwise return 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPower3(int number);

int main(void) {
    int num;
    scanf("%d", &num);

    isPower3(num)? printf("Yesss"):printf("Noooo");
}

bool isPower3(int number){
    if (number == 0)
        return 0;

    while (number != 1)
    {
        if (number%3 != 0)
            return 0;
        number = number/3;
    }
    return 1;
}
