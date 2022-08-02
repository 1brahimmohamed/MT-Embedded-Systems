/*
 ============================================================================
 Name        : Problem5.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program to print the ASCII value of a character input by the user
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char input;
    printf("Enter the character to print: ");
    scanf("%c",&input);
    printf("The ASCII value of the char %c is %d", input, input);
	return 0;
}
