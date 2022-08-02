/*
 ============================================================================
 Name        : Problem10.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program to make a simple calculator using switch-case. The calculator takes the operation
                (+ or – or * or /) and takes the two input arguments and print the results.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num1 , num2, result;
    char op;

    printf("Enter the 2 numbers and the operation respectively: ");
    scanf("%d %d %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            result= num1 + num2;
            break;
        case '-':
            result= num1 - num2;
            break;
        case '*':
            result= num1 * num2;
            break;
        case '/':
            result= num1 / num2;
            break;
    }
    printf("The result is %d",result);

	return 0;
}
