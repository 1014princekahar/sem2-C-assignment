// Write a C program that uses fscanf function to read integer values from a file, computes the square of each integer value and places the resultant values in a different file.

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;

    int num;

    fp1 = fopen("input1.txt", "r");
    if (fp1 == NULL)
    {
        printf("Cannot open input file\n");
        return 1;
    }

    fp2 = fopen("output1.txt", "w");
    if (fp2 == NULL)
    {
        printf("Cannot open output file\n");
        fclose(fp1);
        return 1;
    }

    while (fscanf(fp1, "%d", &num) == 1)
        fprintf(fp2, "%d\n", num * num);

    fclose(fp1);
    fclose(fp2);

    printf("Squares written to output file successfully.\n");
    
    return 0;
}