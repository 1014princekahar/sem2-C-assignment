/*
Write a function space(x) that can be used to provide a space of x positions between two output numbers. 
Demonstrate its application.
*/

#include <stdio.h>

void space(int x)
{
    for (int i = 0; i < x; i++)
        printf(" ");
}

int main()
{
    printf("123");
    space(3);
    printf("456\n");
    return 0;
}