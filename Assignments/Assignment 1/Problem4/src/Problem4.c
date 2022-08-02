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

int main(void) {
    float radius, circumference, area;
    const float pi = 22.0f/7.0f;

    printf("Enter the radius of the circle:  ");
    scanf("%f",&radius);
    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("The circumference is %f \n The area is %f", circumference, area);
    return 0;
}
