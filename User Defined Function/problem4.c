/*
An n_order polynomial can be evaluated as follows:
        P = (.....(((a 0 x+a 1 )x+a 2 )x+a 3 )x+...+a n)
Write a function to evaluate the polynomial, using an array variable. 
Test it using a main program.
*/

#include <stdio.h>

int evaluate_polynomial_series(int a[], int n, float x)
{
    int p = a[0];
    for (int i = 1; i <= n; i++)
        p = p * x + a[i];
    return p;
}

int main()
{
    int n, x;
    printf("Enter N : ");
    scanf("%d", &n);
    int a[n + 1];

    printf("Enter %d Coefficicents : \n", n);
    for (int i = 0; i <= n; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Enter The Value of X ( that is multiply ) : ");
    scanf("%d", &x);
    
    printf("The Answer of the polynomial is %d ", evaluate_polynomial_series(a, n, x));
    return 0;
}