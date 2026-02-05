/*
Write a function day_name that received a number n and returns a pointer to a character string containing the name of corresponding day. 
The day name should be kept in a static table of character strings local to the function.
*/

#include<stdio.h>

void day_name(int n)
{
    char *day;
    char *days[] = {"Invalid Day", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    day = (n >= 1 && n<=7) ? days[n] : days[0];

    printf("The Day is : %s",day);
}

int main()
{
    int n;
    printf("Enter Number between 1 to 7 : ");
    scanf("%d", &n);

    day_name(n);
    return 0;
}