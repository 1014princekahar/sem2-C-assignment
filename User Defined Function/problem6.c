// Write a function that will round a floating-point number to an indivated decmial place. For example the number 17.457 would yield the value 17.46 when it is rounded off to two decimal places.
#include <stdio.h>
void rounded(float num, int round)
{
    printf("%.*f\n", round, num);
}
int main()
{
    float num;
    int round;
    printf("Enter number to round: ");
    scanf("%f", &num);
    printf("Enter number of decimal places to round to: ");
    scanf("%d", &round);
    rounded(num, round);
}