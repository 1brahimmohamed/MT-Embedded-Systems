/*
 ============================================================================
 Name        : Problem14.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program to display English alphabets from A to Z
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    for (int i = 0; i < 26; ++i) {
        printf("%c\n", 'A'+i);
    }

	return 0;
}
