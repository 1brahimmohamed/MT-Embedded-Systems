/*
 ============================================================================
 Name        : Problem11.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int charFreqency(char* const str, char charcter);

int main(void) {
	 char str[1000];
	 char ch;
	 int number;

	 printf("Enter a string: ");
	 fflush(stdout);
	 gets(str);

	 printf("Enter a character to find the frequency: ");
	 fflush(stdout);
	 scanf("%c",&ch);

	 number = charFreqency(str,ch);
	 printf("Frequency of %c = %d", ch, number);

	return EXIT_SUCCESS;
}

int charFreqency(char* const str, char charcter){
	int i,freq = 0;
		for(i = 0; str[i] != '\0'; i++){
			if(charcter == str[i])
				freq++;
	    }
		return freq;
}
