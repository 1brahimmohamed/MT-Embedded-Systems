/*
 ============================================================================
 Name        : Problem2.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C Function that takes one character and checks if it alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int isAlphabet(char character);

int main(void) {
    char chara;
    printf("Please enter the char: ");
    scanf("%c",&chara);

    if(isAlphabet(chara) == 1)
        printf("The Character is alphabet");
    else
        printf("The Character is not alphabet");

    return 0;
}

int isAlphabet(char character){
    if( (character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z') )
        return 1;
    else
        return 0;
}