// Write a program to copy the contents of one file into another.

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;

    char ch;
    char f1[50], f2[50];

    printf("Enter first file name: ");
    scanf("%s", f1);

    printf("Enter second file name: ");
    scanf("%s", f2);
    
    fp1 = fopen(f1, "w"); 
    getchar();
    
    printf("Enter text for %s file (end with ~ and then enter):", f1);
    while ((ch = getchar()) != '~') // Read characters until '~' is encountered
        fputc(ch, fp1);

    fclose(fp1);

    fp1 = fopen(f1, "r");
    fp2 = fopen(f2, "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File is Not Open\n");
        return 1;
    }
    else
        printf("File is Opened Successfully\n");

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp2);

    printf("File copied successfully.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
