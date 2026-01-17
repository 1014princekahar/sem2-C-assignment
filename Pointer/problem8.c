// Given an array of sorted list of integer numbers, Write a function to search for a particular item, using the method of binary search. And also show how this function may be used in a program. use pointers and pointer arithmetic.
#include <stdio.h>
int binarySearch(int *arr, int size, int find)
{
    int *low = arr;
    int *high = arr + size - 1;

    while (low <= high)
    {
        int *mid = low + (high - low) / 2;

        if (*mid == find)
        {
            return (int)(mid - arr);
        }
        else if (*mid < find)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size, i, arr[100], key;

    printf("Enter Array Size : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("Enter %d Value : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Which Element You Have To Find : ");
    scanf("%d", &key);
    int result = binarySearch(arr, size, key);

    if (result != -1)
    {
        printf("Element %d found at Index : %d\n", key, result);
        printf("Memory Address : %p\n", (void *)&arr[result]); // Pointer subtraction gives index
    }
    else
    {
        printf("Element not found.\n");
    }
    return 0;
}