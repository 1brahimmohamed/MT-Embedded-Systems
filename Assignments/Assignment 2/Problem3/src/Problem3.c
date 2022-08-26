/*
 ============================================================================
 Name        : Problem3.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : C Function that check if the number if positive or negative.
 ============================================================================
 */

#include <stdio.h>
int* bubbleSort(int * number);
void swap(int* xp, int* yp);


int main(void) {
   int arr[] =  {5,1,4,2,8};
   bubbleSort(arr);

    for (int i = 0; i < sizeof(arr); ++i) {
        printf("%d", arr[i]);
    }
   return 0;
}

int* bubbleSort(int * number){
    int * p = number;

    while ()
        if(*p > *(p+1)){
            swap(p,(p+1));
        }
    }
}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}