/*
 ============================================================================
 Name        : Problem1.c
 Author      : Ibrahim Mohamed
 Version     :
 Description : C Function that calculate the sum of array
 ============================================================================
 */

#include <stdio.h>

int summation(int numbers_size, int* numbers);

int main(void) {

	int arr[4];

	printf("Please Enter 4 numbers to sum them \n");
	fflush(stdout);
	for(int i = 0; i < 4; i++){
		scanf(" %d",&arr[i]);
	}

	printf("the sum is %d \n", summation(4,arr));

	return 0;
}

int summation(int numbers_size, int* numbers){

	int sum = 0;

	for(int i = 0; i < numbers_size; i++){
		sum = sum + numbers[i];
	}

	return sum;
}
