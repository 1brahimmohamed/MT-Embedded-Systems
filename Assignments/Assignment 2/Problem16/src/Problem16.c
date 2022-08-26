/*
 ============================================================================
 Name        : Problem16.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C function to count the number of 1’s in an unsigned 8-bit integer
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
    unsigned int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
