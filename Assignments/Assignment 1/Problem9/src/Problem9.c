/*
 ============================================================================
 Name        : Problem9.c
 Author      : Ibrahim
 Version     :
 Copyright   : Your copyright notice
 Description : program that reads a student grade percentage and prints "Excellent" if his grade is greater than or
                equal 85, "Very Good" for 75 or greater; "Good" for 65, "Pass" for 50, "Fail" for less than 50.
 ============================================================================
 */

#include <stdio.h>

int main(void) {
    int percentage;

    printf("Enter the percentage: ");
    scanf("%d", &percentage);

    if (percentage >= 85)
        printf("Excellent");
    else if (percentage >= 75)
        printf("Very Good");
    else if (percentage >= 65)
        printf("Good");
    else if (percentage >= 50)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}
