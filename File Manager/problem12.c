/*
Write a C program that uses getw function to read integer values from one file.
Subsequently, it uses the putw function to write the integer values in reverse order in another file.
*/
#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int a[100], n = 0, i;

    fp1 = fopen("input", "r");
    fp2 = fopen("output.dat", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File opening error!");
        return 1;
    }

    /* Read integers from file using getw() */
    while ((a[n] = getw(fp1)) != EOF)
        n++;

    /* Write integers in reverse order using putw() */
    for (i = n - 1; i >= 0; i--)
        putw(a[i], fp2);

    fclose(fp1);
    fclose(fp2);

    printf("Integers written in reverse order successfully.");
    return 0;
}