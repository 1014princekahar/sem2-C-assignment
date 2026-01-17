// Write a C program to insert a substring into another string by using function and pointers
#include <stdio.h>
#include <string.h>

void insertSubString(char *mainStr, char *ptrSubstr, int position)
{
    char temp[200];
    char *ptrMainStr = mainStr;
    char *ptrTemp = temp;

    for (int i = 0; i < position; i++)
        *ptrTemp++ = *ptrMainStr++; // copy from main string to position to temp

    while (*ptrSubstr)
        *ptrTemp++ = *ptrSubstr++; // copy from sub string to temp where we left above loop

    while (*ptrMainStr)
        *ptrTemp++ = *ptrMainStr++; // copy from remaining main str to temp where we left above loop

    *ptrTemp = '\0';
    strcpy(mainStr, temp); // copy string from temp to main string
}
int main()
{
    char str[100], subStr[100];
    int ch, i = 0, position;
    printf("Enter Your String : ");
    while ((ch = getchar()) != '\n' && ch != EOF && i < 99)
    {
        str[i++] = ch;
    }
    str[i] = '\0';

    printf("Enter Your SubString : ");
    i = 0;
    while ((ch = getchar()) != '\n' && ch != EOF && i < 99)
    {
        subStr[i++] = ch;
    }
    subStr[i] = '\0';

    printf("Enter the Position to Insert at ( 0 to %lu ) : ",strlen(str) - 1 );
    scanf("%d", &position);

    printf("\nOriginal String : %s\n", str);
    insertSubString(str, subStr, position);
    printf("\nAfter Insertion SubString : %s\n", str);
    return 0;
}