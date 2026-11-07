/*Program(13)->Write a program using the switch-case statement to create a menu-driven calculator that repeatedly performs arithemetic operations until the user exists the program.*/

#include<stdio.h>
int main()
{
    int num,i=1;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("\n Multiplication Table Of %d\n",num);

    do
        {
            printf("%d*%d=%d\n",num,i,num*i);
            i++;
        }
        while(i<=10);
    return 0;
}
