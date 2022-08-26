/*
 ============================================================================
 Name        : Problem6.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C Function that converts the any letter from lowercase to uppercase.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char toUpperCase(char s);

int main(void) {
    char letter;
    printf("Enter the lowercase letter: ");
    scanf("%c", &letter);

    printf("The Uppercase letter is: %c", toUpperCase(letter));

}
char toUpperCase(char s){
    s = s - 32;
    return s;
}
