/*
 ============================================================================
 Name        : Problem11.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C function that checks if the input number is a power of 2
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int num);

int main(void) {

    int num;
    scanf("%d", &num);

    if(isPowerOfTwo(num) == 1)
        printf("Yes");
    else
        printf("No");
	return 0;
}

bool isPowerOfTwo(int num){

    if (num == 0)
        return 0;
    while (num != 1)
    {
        if (num%2 != 0)
            return 0;
        num = num/2;
    }
    return 1;
}
