/*
The Fibonacci numbers aredefined recursively as follows:
        F1 = 1
        F2 = 1
        Fn = Fn-1 + Fn-2,n>2
Write a function that will generate and print the first n Fibonacci numbers. Test the function for n = 5 , 10 , and 15
*/
#include <stdio.h>
int fibonacci(int n)
{
    if (n <= 0)
    {
        printf("Please enter a positive integer.");
        return -1;
    }
    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    return 0;
}
int main()
{
    int n;
    printf("How many Fibonacci numbers do you want to generate? ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}