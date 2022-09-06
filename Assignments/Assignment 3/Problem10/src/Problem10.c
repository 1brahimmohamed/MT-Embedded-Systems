/*
 ============================================================================
 Name        : Problem10.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void UppercaseToLowercase(char * str);

int main(void) {
	char str[20];
	printf("Please enter the required sting message : ");
	fflush(stdout);
	gets(str);
	printf("\n");
	UppercaseToLowercase(str);
	printf("Message after converting : %s\n",str);
	return EXIT_SUCCESS;
}

void UppercaseToLowercase(char * str){
	int i=0;
	while(str[i] != '\0')
	{
		if((str[i]>='A') && (str[i]<='Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}
