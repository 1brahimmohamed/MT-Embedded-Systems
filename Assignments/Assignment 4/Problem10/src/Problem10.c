/*
 ============================================================================
 Name        : Problem10.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>

void Swap_two_pointers(int **p1,int **p2)
{
	int *temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(void)
{
	int num1=5,num2=7;
	int *ptr1 = &num1;
	int *ptr2 = &num2;

	printf("*prt1 = %d\n",*ptr1); /* It should be the value of num1 */
	printf("*prt2 = %d\n",*ptr2); /* It should be the value of num2 */

	Swap_two_pointers(&ptr1,&ptr2);

	printf("*prt1 = %d\n",*ptr1); /* It should be the value of num2 */
	printf("*prt2 = %d\n",*ptr2); /* It should be the value of num1 */

	return 0;
}

