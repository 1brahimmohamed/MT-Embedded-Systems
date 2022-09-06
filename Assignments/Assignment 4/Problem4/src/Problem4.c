/*
 ============================================================================
 Name        : Problem4.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */


#include<stdio.h>

#define ARR_SIZE 10

int findSmallestElement(int *ptr,int size)
{
	int i = 0;
	// assume that the minimum number is the first element
	int min = ptr[0];

	// start compare from the second array element
	for(i=1;i<size;i++)
	{
		if(ptr[i] < min)
		{
			min = ptr[i];
		}
	}
	return min;
}


int main(void)
{
   int i, arr[ARR_SIZE];
   int num;
   printf("\nEnter integers into array: ");

   for (i = 0; i < ARR_SIZE; i++)
   {
      scanf("%d", arr+i); // take each array element from user
   }

   num = findSmallestElement(arr,ARR_SIZE);

   printf("\nThe smallest array element is : %d",num);

   return 0;
}
