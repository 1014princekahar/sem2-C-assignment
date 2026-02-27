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
    int spaces, num1 = 5, num2 = 10;
    printf("How many spaces you have include between two numbers : ");
    scanf("%d", &spaces);
    printf("Num 1 is %d Num 2 is %d \n", num1 , num2 );
    printf("%d", num1);
    space(spaces);
    printf("%d\n", num2);
    return 0;
}