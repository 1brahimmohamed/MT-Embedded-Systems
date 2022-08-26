/*
 ============================================================================
 Name        : Problem12.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program that reads a positive integer and computes the factorial
 ============================================================================
 */

#include <stdio.h>

int heatingTime(int temp);

int main(void) {
    int temp;
    scanf("%d", &temp);
    printf("The Heating time is %d", heatingTime(temp));
    return 0;
}

int heatingTime(int temp){

    if(temp > 100)
        return 0;
    else if(temp > 90)
        return 1;
    else if(temp > 60)
        return 3;
    else if (temp > 30)
        return 5;
    else if (temp > 0)
        return 7;

    return 0;
}
