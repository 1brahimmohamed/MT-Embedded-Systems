/*
 ============================================================================
 Name        : Problem3.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int size);

int main(void) {

	/*
	 * create array and compute the size of it
	 * the size is computed by sizeof that gives the total size of array in bytes
	 * when you divide it by a size of its type it gives the number of elements in the array
	 * */

	int arr[5] = {5, 1, 4, 2, 8};
	int arraySize = sizeof(arr)/sizeof(arr[0]);

	printf("array size is %d \n", arraySize);

	bubbleSort(arr, arraySize);

	for(int i = 0; i < arraySize; i++)
		printf("%d ,",arr[i]);
	return EXIT_SUCCESS;
}

void bubbleSort(int* array, int size){

	for(int i = 0; i < size - 1; i++){

		for(int j = 0; j < size-i-1; j++){

			int first = array[j];
			int second = array[j+1];
			int temp;

			if(first > second){
				temp = array[j];
				array[j] =array[j+1];
				array[j+1] = temp;
			}

		}
	}
}
