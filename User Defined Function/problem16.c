/*
Write a program that invokes a function called find( ) to perform the following tasks:
    A. Receives a character array and a single character.
    B. Returns 1 if the specified character is found in the array, 0 otherwise.
*/

#include <stdio.h>

int find(char array[], char character)
{
    for (int i = 0; array[i] != '\0'; i++)
    {
        if (array[i] == character)
            return 1;
    }
    return 0;
}

int main()
{
    char str[100];
    char find_charater;

    printf("Enter a character array: ");
    fgets(str, 100, stdin);

    printf("Enter a character to search for: ");
    scanf(" %c", &find_charater);

    if (find(str, find_charater) == 1)
        printf("The character '%c' is found in the array.\n", find_charater);
    else
        printf("The character '%c' is not found in the array.\n", find_charater);
    return 0;
}