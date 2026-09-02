/*
Program (4) -> Write a program to calculate the
area of a circle.
Solution (2) -> User Defined Values
*/

#include <stdio.h>

int main()
{
    float radius, area;

    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);

    area = (3.14 * radius * radius);

    printf("\nArea of circle = %f", area);

    return 0;
}