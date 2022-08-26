/*
 ============================================================================
 Name        : Problem14.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C Function that calculate the Fibonacci series using recursive method.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int fabSeries(int reps);

int main(void) {

    printf("%d",fabSeries(10));
	return 0;
}

int fabSeries(int reps){
    if (reps <= 1)
        return reps;
    return fabSeries(reps-1) + fabSeries(reps-2);
}
