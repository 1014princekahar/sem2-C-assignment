/*
Develop a modular interactive program using functions that reads the values of three sides of a triangle and displays either its area or its perimeter as per the request of the user. Given the three sides a, b and c.
        Perimeter = a + b + c
		    Area = sqrt ((s-a)*(s-b)*(s-c))
	Where       s = (a+b+c)/2
*/

#include <stdio.h>
#include <math.h>

void read_sides(float a, float b, float c)
{
    printf("Enter first side: ");
    scanf("%f", &a);
    printf("Enter second side: ");
    scanf("%f", &b);
    printf("Enter third side: ");
    scanf("%f", &c);
}

float perimeter(float a, float b, float c)
{
    return a + b + c;
}

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2;
    return sqrt((s - a) * (s - b) * (s - c));
}

int main()
{
    float a, b, c;
    char operation;

    read_sides(a,b,c);

    printf("Enter one of the followings: ");
    printf("\n\tA. Perimeter of the triangle ");
    printf("\n\tB. Area of the triangle ");
    printf("\n");

    scanf(" %c", &operation);
    switch (operation)
    {
        case 'A':
            printf("Result -> %f\n", perimeter(a, b, c));
            break;
        case 'B':
            printf("Result -> %f\n", area(a, b, c));
            break;
        default:
            printf("Invalid operation\n");
    }
    return 0;
}