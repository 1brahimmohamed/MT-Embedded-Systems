/*
 ============================================================================
 Name        : Problem9.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void fibonacciLoop(int nthTerm);
int fibonacciRecursion(int nthTerm);

int main(void) {

	return EXIT_SUCCESS;
}

void fibonacciLoop(int nthTerm){

	int i = 2,fabSer[100];
	fabSer[0] = 1;
	fabSer[1] = 1;
	for(i=2 ; i < 100; i++){
		fabSer[i] =  fabSer[i-1] + fabSer[i-2];
	}
	printf("the %dth term is %d", nthTerm, fabSer[nthTerm-1]);
}

int fibonacciRecursion(int nthTerm){

	if(nthTerm==0 || nthTerm==1)
	{
		return nthTerm;
	}
	else{
		return fibonacciRecursion(nthTerm-1) + fibonacciRecursion(nthTerm-1);
	}
}
