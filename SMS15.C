/*Program(15)->Write a program to generate the multiplication table of any number using while loop,do while loop and for loop.

Soltuion(2):Using do-while loop*/


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
