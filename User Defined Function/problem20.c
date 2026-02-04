/*
Write a function that receives a floating point value x and returns it as a value rounded to two nearest decimal places. 
For example, the value 123.4567 will be rounded to 123.46 
(Hint: Seek help of one of the math functions available in math library).
*/
#include <stdio.h>
#include <math.h>

double round_two_decimals(double x)
{
    return round(x * 100.0) / 100.0;
}

int main(void)
{
    double x;

    printf("Enter a floating point value: ");
    if (scanf("%lf", &x) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Rounded value: %.2f\n", round_two_decimals(x));
    return 0;
}
