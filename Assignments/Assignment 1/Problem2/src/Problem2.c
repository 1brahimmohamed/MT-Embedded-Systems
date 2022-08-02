/*
 ============================================================================
 Name        : Problem2.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program that print your name and your grade in a new line.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char name[20], grade[20];
    printf("Enter your name: ");
    gets(name);
    printf("Enter your Grade: ");
    gets(grade);
	printf("Your name is %s\n Your grade is %s",name,grade);
	return 0;
}
