/*
Use recursive function calls to evaluate
        f(x) = x - pow(x,3)/3! + pow(x,5)/5! - pow(x,7)/7! + .....
*/

#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

float evaluate(int x, int n, int i,int terms) 
// x = value of x, n = current power, i = current term number, terms = total number of terms to evaluate
{
    if (n > terms * 2 - 1) // Highest power is 2 * terms - 1
        return 0;
    else if (i % 2 == 0)
        return -pow(x, n) / factorial(n) + evaluate(x, n + 2, i + 1, terms); // if terms is even then negative
    else
        return pow(x, n) / factorial(n) + evaluate(x, n + 2, i + 1, terms); // if terms is odd then positive
}

int main()
{
    int x, terms;

    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the number of terms to evaluate : ");
    scanf("%d", &terms);

    printf("The value of f(x) is : ");
    printf("%f\n", evaluate(x, 1, 1, terms));
    return 0;
}