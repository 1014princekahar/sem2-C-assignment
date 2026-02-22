// Write a C program that uses the pointer increment operations to demonstrate the scale factor

#include <stdio.h>

int main()
{
    int integer = 0, *ptrinteger = &integer;
    char charater = 'a', *ptrcharacter = &charater;
    double doubLe = 0.0, *ptrdoubLe = &doubLe;

    printf("Int Pointer     :   %p -> After Increment Operations : %p (Difference: %ld bytes)\n", ptrinteger, ptrinteger + 1, (long)(ptrinteger + 1) - (long)ptrinteger);
    printf("Char Pointer    :   %p -> After Increment Operations : %p (Difference: %ld bytes)\n", ptrcharacter, ptrcharacter + 1, (long)(ptrcharacter + 1) - (long)ptrcharacter);
    printf("Double Pointer  :   %p -> After Increment Operations : %p (Difference: %ld bytes)\n", ptrdoubLe, ptrdoubLe + 1, (long)(ptrdoubLe + 1) - (long)ptrdoubLe);
    
    return 0;
}