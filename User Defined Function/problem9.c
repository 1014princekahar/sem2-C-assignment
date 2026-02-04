/*
Develop a top_down modular program to implement a calculator. The program should request the user to input two numbers and display one of the following as per the desire of the user:
    A. Sum of the numbers
    B. Difference of the numbers
    C. Product of the numbers
    D. Division of the numbers
Provide separate functions for performing various tasks such as reading, calculating and displaying. Calculating module should call second level modules to perform the individual mathematical operations. The main function should have only function calls.
*/
#include <stdio.h>
void read_numbers(float *a, float *b)
{
    printf("Enter two numbers: ");
    scanf("%f %f", a, b);
}
float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    if (b != 0)
        return a / b;   
    else
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
}
void display_result(float result)
{
    printf("Result: %.2f\n", result);
}
void calculate(float a, float b, char operation)
{
    float result;
    switch (operation)
    {
        case 'A':
            result = add(a, b);
            break;
        case 'B':
            result = subtract(a, b);
            break;
        case 'C':
            result = multiply(a, b);
            break;
        case 'D':
            result = divide(a, b);
            break;
        default:
            printf("Invalid operation!\n");
            return;
    }
    display_result(result);
}
int main()
{
    float num1, num2;       
    char operation;
    read_numbers(&num1, &num2);
    printf("Enter operation (A, B, C, D): ");
    scanf(" %c", &operation);
    calculate(num1, num2, operation);
    return 0;
}
