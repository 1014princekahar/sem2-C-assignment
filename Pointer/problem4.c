// Write a function that pointers to add two matrices and to return the resultant matrix to the calling function
#include <stdio.h>
void addMatrices(int *ptr, int *ptr2, int *ans, int row, int col)
{
   for (int i = 0; i < row * col; i++)
       *(ans + i) = *(ptr + i) + *(ptr2 + i);
}
int main()
{
   int i, j, array1[2][2], array2[2][2], add[2][2];
   for (i = 0; i < 2; i++)
   {
       for (j = 0; j < 2; j++)
       {
           printf("Enter array1[%d][%d] : ", i, j);
           scanf("%d", &array1[i][j]);
       }
   }

   printf("\n");
   for (i = 0; i < 2; i++)
   {
       for (j = 0; j < 2; j++)
       {
           printf("Enter array2[%d][%d] : ", i, j);
           scanf("%d", &array2[i][j]);
       }
   }

   addMatrices(*array1, *array2, *add, 2, 2);
   printf("Addititon of the given Matrices is \n");

   for (i = 0; i < 2; i++)
   {
       for (j = 0; j < 2; j++)
           printf("%d\t", add[i][j]);
       printf("\n");
   }

   return 0;
}