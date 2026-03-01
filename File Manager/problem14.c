// Write a C program that concatenates the contents of two files and writes then in the third file.

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2, *fp3;

    char ch;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");
    
    if (fp1 == NULL)
    {
        printf("Cannot open file1.txt\n");
        return 1;
    }

    if (fp2 == NULL)
    {
        printf("Cannot open file2.txt\n");
        fclose(fp1);
        return 1;
    }

    fp3 = fopen("file3.txt", "w");
    if (fp3 == NULL)
    {
        printf("Cannot open file3.txt\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp3);

    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp3);

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files concatenated successfully.\n");
    
    return 0;
}