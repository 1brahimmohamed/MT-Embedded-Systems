/*
 ============================================================================
 Name        : Problem9.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C Function that swaps the value of two integer numbers
 ============================================================================
 */

#include <stdio.h>
int * swap(int num1, int num2);
int main(void) {
    int num1,num2;
    printf("Enter the 2 numbers to swap: ");
    scanf("%d%d", &num1, &num2);
    int *result = swap(num1,num2);
    num1 = result[0];
    num2 = result[1];
    printf("%d %d", num1, num2);
    return 0;
}

int * swap(int num1, int num2){
    int container;
    container = num2;
    num2 = num1;
    num1 = container;
    int result[2] = {num1, num2};
    return result;
}
