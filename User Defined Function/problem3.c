/*
Use recursive function cals to evaluate
    f(x) = x - cube(x) / 3! + fifth power(x) / 5! - seven power(x) / 7! * .....
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
}