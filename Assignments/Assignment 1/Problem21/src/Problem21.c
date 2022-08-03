/*
 ============================================================================
 Name        : Problem21.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program to display cross or X-shape using stars pattern.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, N;
    int count;

    scanf("%d", &N);

    count = N * 2 - 1;

    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
