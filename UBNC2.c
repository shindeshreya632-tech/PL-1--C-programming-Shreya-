/*
Program (1): Write a program to make use of basic I/O functions using different data types.
Solution (2) → User Define Value
*/

#include <stdio.h>

int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\nEnter Student Roll Number: ");
    scanf("%d", &rollnum);

    printf("\nEnter Student Percentage: ");
    scanf("%f", &per);

    printf("\nEnter Student Grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Information -----\n");
    printf("\nRoll Number is : %d", rollnum);
    printf("\nPercentage is : %f", per);
    printf("\nGrade : %c", grade);

    return 0;
}