/*
 ============================================================================
 Name        : Problem7.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C Function that reads two integers and checks if the first is multiple of the second
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int isMultipleOf(int num1, int num2);
int main(void) {
    int num1, num2;

    printf("Enter the 2 Numbers: ");
    scanf("%d%d", &num1, &num2);

    if(isMultipleOf(num1,num2) == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}

int isMultipleOf(int num1, int num2){
    if (num1%num2 == 0)
        return 1;
    else return 0;
}

