/*
 ============================================================================
 Name        : Problem2.c
 Author      : Ibrahim Mohamed
 Version     :
 Description : C Function that takes one character and checks if it alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool lettersDistinct(char* word, int wordSize);

int main(void) {
//	char str[10];
//	printf("Enter the word to check \n");
//	fflush(stdout);
//	scanf("%s", str);


	bool answer = lettersDistinct("Ibrahim Mohamed", sizeof("Ibrahim Mohamed"));

	if(answer == true)
		printf("all characters are distinct in the string\n");
	else
		printf("characters are not distinct in the string\n");

	return 0;

}

bool lettersDistinct(char* word, int wordSize){
	int freq[255] = {0};

	for(int i = 0; i < wordSize; i++){
		freq[(int)word[i]]++;
	}

	for(int i = 0; i < 255; i++){
		if(freq[i] > 1)
			return false;
	}

	return true;
}
