/*
 ============================================================================
 Name        : Problem4.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *arr, int size);

int main(void) {

	int arr[5] = {5, 1, 4, 2, 8};
	int arraySize = sizeof(arr)/sizeof(arr[0]);
	printf("array size is %d \n", arraySize);
	selectionSort(arr, arraySize);
	for(int i = 0; i < arraySize; i++)
		printf("%d ,",arr[i]);

	return EXIT_SUCCESS;
}

void selectionSort(int *arr, int size){

    int i,j,min,temp;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
		{
            if(arr[min]>arr[j])
			{
				min=j;
			}
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }


}
