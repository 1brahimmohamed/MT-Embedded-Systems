/*
 ============================================================================
 Name        : Problem10.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program to make a simple calculator using switch-case. The calculator takes the operation
                (+ or – or * or /) and takes the two input arguments and print the results.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int countHoles(int num);

int main(void) {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The Number of holes is: %d", countHoles(num));
	return 0;
}

int countHoles(int num){
    int rem, holes;

    while(num != 0)
    {
        rem=num%10;

        switch (rem) {
            case 4:
            case 6:
            case 9:
                holes++;
                break;
            case 8:
                holes += 2;
                break;
        }
        num /= 10;
    }
    return holes;
}
