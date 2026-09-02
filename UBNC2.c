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