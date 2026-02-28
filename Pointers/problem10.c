/*
Write a function ( using pointer parameters ) that compares two integer arrays to see whether they are identical. 
The function returns 1 if they are identical, 0 otherwise.
*/

#include <stdio.h>

int comapare_two_integer(int *arr1, int *arr2, int arr1size, int arr2size)
{
    int i;
    if (arr1size != arr2size)
        return 0;
    else
    {
        for (i = 0; i < arr1size; i++)
        {
            if (*(arr1 + i) != *(arr2 + i))
            {
                return 0;
                break;
            }
        }
    }
}
int main()
{
    int arr1Size, arr2Size, i, j, arr1[100], arr2[100];
    printf("Enter Array 1 Size : ");
    scanf("%d", &arr1Size);

    printf("Enter Array 2 Size : ");
    scanf("%d", &arr2Size);
    
    for (i = 0; i < arr1Size; i++)
    {
        printf("Enter Array 1[%d] Value : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\n");
    
    for (i = 0; i < arr2Size; i++)
    {
        printf("Enter Array 2[%d] Value : ", i);
        scanf("%d", &arr2[i]);
    }
    
    int b = comapare_two_integer(arr1, arr2, arr1Size, arr2Size);
    
    if (b == 0)
        printf("Both Array are Diffrenet\n");
    else
        printf("Both Array are Identical\n");

    return 0;
}