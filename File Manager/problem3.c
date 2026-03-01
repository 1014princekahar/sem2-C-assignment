// Write a program that compares two files and returns 0 if they are equal and 1 is they are not.

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;

    int num1, num2;
    char ch1, ch2;
    char f1[50], f2[50];

    printf("Enter first file name: ");
    scanf("%s", f1);

    printf("Enter second file name: ");
    scanf("%s", f2);

    fp1 = fopen(f1, "w");
    fp2 = fopen(f2, "w");

    getchar();

    printf("Enter text for %s file (end with ~ and enter):\n", f1);
    while ((ch1 = getchar()) != '~')
        fputc(ch1, fp1);

    getchar();

    printf("Enter text for %s file (end with ~ and enter):\n", f2);
    while ((ch2 = getchar()) != '~')
        fputc(ch2, fp2);

    fclose(fp1);
    fclose(fp2);

    fp1 = fopen(f1, "r");
    fp2 = fopen(f2, "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File is Not Open\n");
        return 1;
    }
    else
        printf("File is Opened Successfully\n");

    while (1)
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);

        if (ch1 != ch2)
        {
            fclose(fp1);
            fclose(fp2);
            printf("Files are not equal.\n");
            return 1; // Files are not equal
            /* give instruction to compiler that is a error in the program */
        }

        if (ch1 == EOF && ch2 == EOF) // Both Files are reached end point
            break;
    }

    printf("Files are equal.\n");
    fclose(fp1);
    fclose(fp2);

    return 0;
}