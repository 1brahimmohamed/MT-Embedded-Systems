/*
 ============================================================================
 Name        : Problem7.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Program that computes the nth term of the geometric series
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int arr[100],i;
	    int index;
	    printf("Enter the element index : ");
	    fflush(stdout);
	    scanf("%d",&index);
	    arr[0] = 1;
	    for(i=1; i<100; i++)
	    {
	    	arr[i]=arr[i-1]*3;
	    }
	    printf("\nThe %dth term is:%d",index,arr[index-1]);

	return EXIT_SUCCESS;
	}
