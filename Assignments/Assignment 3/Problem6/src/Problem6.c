/*
 ============================================================================
 Name        : Problem6.c
 Author      : Ibrahim
 Version     :
 Description : Linear Search Algorithm
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int findIndexOfLastOccurrence(int* arr, int toBeFound,int size);

int main(void) {

	int arr[] = {1,2,3,4,4,4};
		int arraySize = sizeof(arr)/sizeof(arr[0]);
		int index = findIndexOfLastOccurrence(arr, 4, arraySize);
		printf("The Index is: %d", index);

		return EXIT_SUCCESS;
}

int findIndexOfLastOccurrence(int* const arr, int toBeFound,int size){
	int i,lastIndex = -1;
	for(i = 0; i < size ; i++){
		if(arr[i] == toBeFound)
			lastIndex = i;
	}

	return lastIndex;

}
