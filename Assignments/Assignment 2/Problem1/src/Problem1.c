/*
 ============================================================================
 Name        : Problem1.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C Function that prints the cube of any number
 ============================================================================
 */

#include <stdio.h>

int cubeOfNumber(int num);
int summation(int numbers_size, int* numbers);

int main(void) {
    int hima[4] = {1,2,3,4};
    printf("%d",summation(4,hima));
}

int summation(int numbers_size, int* numbers){
    int sum = 0;

    for (int i = 0; i < 4; ++i) {
        sum += *numbers;
        numbers++;
    }
    return sum;
}