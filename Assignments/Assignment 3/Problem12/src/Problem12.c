/*
 ============================================================================
 Name        : Problem12.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int lengthStr(char* const str);

int main(void) {
	char str[20];
	printf("Please enter the sting: ");
	fflush(stdout);
	gets(str);
	printf("\n");
	int len = lengthStr(str);
	printf("size is: %d\n",len);
	return EXIT_SUCCESS;
}
int lengthStr(char* const str){
	int i,length;

	while(str[i] != '\0'){
		length++;
	}

	return length;
}
