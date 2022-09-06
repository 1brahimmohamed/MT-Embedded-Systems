/*
 ============================================================================
 Name        : Problem2.c
 Author      : Ibrahim Mohamed
 Version     :
 Description : C Function that takes one character and checks if it alphabet or not
 ============================================================================
 */

#include<stdio.h>

int string_ln(char*); // function prototype

int main(void)
{
	char str[20];
	int length;

	printf("\nEnter your string : ");
	gets(str);

	length = string_ln(str);
	printf("The length of the given string \"%s\" is : %d", str, length);
	return 0;
}

int string_ln(char *ptr) /* ptr = &str[0] */
{
	int str_count = 0;
	while (*ptr != '\0') // loop until the end of the string
	{
		str_count++;
		ptr++; // increment the pointer to get the next character
	}
	return str_count;
}
