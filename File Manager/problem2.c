/*
Two files DATA1 and DATA2 contain sorted lists of integers.
Write a program to produce a third file DATA which holds a single sorted, merged list of these two lists.
Use command line arguments to specify the file names.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2, *fp3;
    
    int num1, num2;
    
    if (argc != 4)
    {
        printf("Usage: %s DATA1 DATA2 DATA\n", argv[0]);
        return 1;
    }
    
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "r");
    fp3 = fopen(argv[3], "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("File is Not Open\n");
        return 1;
    }
    else
        printf("File is Opened Successfully\n");

    fscanf(fp1, "%d", &num1);
    fscanf(fp2, "%d", &num2);

    while (!feof(fp1) && !feof(fp2))
    {
        if (num1 < num2)
        {
            fprintf(fp3, "%d\n", num1);
            fscanf(fp1, "%d", &num1);
        }
        else
        {
            fprintf(fp3, "%d\n", num2);
            fscanf(fp2, "%d", &num2);
        }
    } // it is stop when one of the file is end of file

    while (!feof(fp1)) // write the remaining numbers of the file which is not end of file
    {
        fprintf(fp3, "%d\n", num1);
        fscanf(fp1, "%d", &num1);
    }

    while (!feof(fp2)) // write the remaining numbers of the file which is not end of file
    {
        fprintf(fp3, "%d\n", num2);
        fscanf(fp2, "%d", &num2);
    }

    return 0;
}