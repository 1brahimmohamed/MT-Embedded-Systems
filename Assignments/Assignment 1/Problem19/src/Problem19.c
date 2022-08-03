/*
 ============================================================================
 Name        : Problem19.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program to display inverted half pyramid using stars pattern
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 0;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i) {
        for (int j = rows; j >= i ; --j) {
            printf("*" );
        }
        printf("\n" );
    }
    return 0;
}
