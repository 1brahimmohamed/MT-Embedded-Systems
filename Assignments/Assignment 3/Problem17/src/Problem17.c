/*
 ============================================================================
 Name        : Problem17.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : Find the maximal value of A xor B
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int maxXor(int iStart,int iEnd);
int main(void) {
    int L, R;
    printf("Enter the two numbers: ");
    scanf("%d %d", &L,&R);


    printf("Maximum XOR in the interval is: %d", maxXor(L,R));
    return 0;
}

int maxXor(int iStart,int iEnd){

    int max;

    for (int i = iStart; i <= iEnd ; ++i) {
        for (int j = iStart; j <= iEnd ; ++j) {
            int x = i^j;
            if(x > max) {
                max = x;
            }
        }
    }
    return max;

}
