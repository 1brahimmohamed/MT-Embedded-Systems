/*
 ============================================================================
 Name        : Problem20.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program to display a full pyramid using stars pattern
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int countOnes(unsigned int num);

int main(void) {
    unsigned int num;
    scanf("%d",&num);
    printf("%d", countOnes(num));
    return 0;
}

int countOnes(unsigned int num){
    unsigned int count = 0, max;
    while (num) {
        if(num & 1){
            count++;
            if(count > max)
                max = count;
        }
        else
            count = 0;

        num >>= 1;
    }
    return max;
}
