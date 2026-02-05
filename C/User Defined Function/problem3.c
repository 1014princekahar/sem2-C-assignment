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

float evaluate(int x, int n, int i)
{
    if (n >= 10)
        return 0;
    else if (i % 2 == 0)
        return -pow(x, n) / factorial(n) + evaluate(x, n + 2, i + 1);
    else
        return pow(x, n) / factorial(n) + evaluate(x, n + 2, i + 1);
}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%f\n", evaluate(x, 1, 1));
    return 0;
}