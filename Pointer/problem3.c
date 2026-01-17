// Write a function that receives a sorted array of integers and an integer value, and inserts the value in its correct place.
#include <stdio.h>
#include <stdlib.h>
void insertElement(int *arr, int *size, int newElement)
{
   int i;
   for (i = *size - 1; i >= 0 && *(arr + i) > newElement; i--)
       *(arr + i + 1) = *(arr + i);
   *(arr + i + 1) = newElement;
   (*size)++;
}
int main()
{
   int size, *arr, i, newElement;
   printf("Enter Array Size : ");
   scanf("%d", &size);
   arr = (int *)malloc((size + 1) * sizeof(int));

   printf("\nEnter Sorted Element \n");
   for (i = 0; i < size; i++)
   {
       printf("Enter %d Element : ", i + 1);
       scanf("%d", &arr[i]);
   }

   printf("\nEnter a Value to insert : ");
   scanf("%d", &newElement);

   insertElement(arr, &size, newElement);

   printf("Updated Array : \n");
   for (i = 0; i < size; i++)
       printf("%d ", arr[i]);
   printf("\n");
   free(arr);
   return 0;
}