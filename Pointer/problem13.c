// write a C program that displays the addresses and values pointed by an array of pointers.
#include <stdio.h>
int main()
{
    int size, i, arr[100], *ptrArr[100];
    printf("Enter Array Size : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d Value : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        ptrArr[i] = &arr[i]; // Array of pointers
    }
    for (i = 0; i < size; i++)
    {
        printf("Pointer index %d is at address %p, points to value %d\n", i, &ptrArr[i], *ptrArr[i]);
    }
    return 0;
}