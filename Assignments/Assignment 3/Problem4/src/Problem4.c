/*
 ============================================================================
 Name        : Problem4.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Write a C Function that return the addition or subtraction or multiplication or division for two numbers.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int calculator(int num1, int num2, char op);
int main(void) {
    int num1 , num2;
    char op;

    printf("Enter the 2 numbers and the operation respectively: ");
    scanf("%d %d %c", &num1, &num2, &op);

    printf("The result is : %d", calculator(num1,num2,op));

    return 0;
}

int calculator(int num1, int num2, char op){
    int result;

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
        default:
            return EXIT_FAILURE;
    }
    return result;
}
