/*
Program (7) -> Write a C program to swap two
numbers using a temporary variable.
Solution (2) -> User Defined Values
*/

#include <stdio.h>

int main()
{
    int a, b, temp;
a=111;
b=222;

    printf("\n Beforeswapping:");

    printf("\n a=%d,b = %d\n",a, b);
    
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping:");
    printf("\n a=%d,b = %d\n",a, b);
    

    return 0;
}