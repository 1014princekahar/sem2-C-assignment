/*
Write a program that prompts the user for two files, one containing a line of text known as source file and other, an empty file known as target file and then copies the contents of source file into target file.
Modify the program so that a specified character is deleted from the source file as it is copied to the target file.
*/

#include <stdio.h>

int main()
{
    FILE *src, *tgt;
    char source[50], target[50];
    char ch1, ch2;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter target file name: ");
    scanf("%s", target);

    src = fopen(source, "w");

    getchar();

    printf("Enter text for %s file (end with ~):\n", source);
    while ((ch1 = getchar()) != '~')
        fputc(ch1, src);

    getchar();

    fclose(src);

    src = fopen(source, "r");
    tgt = fopen(target, "w");

    if (src == NULL || tgt == NULL)
    {
        printf("File is Not Open\n");
        return 1;
    }
    else
        printf("File is Opened Successfully\n");

    printf("Enter character to delete: ");
    scanf(" %c", &ch2); // Read the character to delete

    while ((ch1 = fgetc(src)) != EOF)
    {
        if (ch1 != ch2) // Skip the specified character
            fputc(ch1, tgt);
    }

    fclose(src);
    fclose(tgt);

    printf("File copied successfully\n");
    return 0;
}
