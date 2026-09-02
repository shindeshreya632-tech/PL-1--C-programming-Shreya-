/*
Program (3): Write a program to calculate the area of a circle.
Solution (1) → Predefined Values
*/


#include <stdio.h>

int main()
{
    float radius = 1.1;
    float area;

    area = (3.14 * radius * radius);

    printf("\nArea of circle = %f", area);

    return 0;
}