/*
Program (5) -> Write a program to calculate the
average of three numbers.
Solution (1) -> Predefined Values
*/

#include <stdio.h>

int main()
{
    int a = 33;
    int b = 47;
    int c = 20;
    float average;

    average = (a + b + c) / 3.0;

    printf("\nAverage = %f", average);

    return 0;
}