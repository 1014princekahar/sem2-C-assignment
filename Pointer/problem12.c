// write a C progrm that uses the pointer increment operations to demonstrate the scale factor
#include <stdio.h>
int main() {
    int INT = 0, *ptrINT = &INT;
    char CHAR = 'a', *ptrCHAR = &CHAR;
    double DOUBLE = 0.0, *ptrDOUBLE = &DOUBLE;

    printf("Int Pointer     :   %p -> After Increment Operations : %p (Difference: %ld bytes)\n", ptrINT, ptrINT + 1, (long)(ptrINT + 1) - (long)ptrINT);
    printf("Char Pointer    :   %p -> After Increment Operations : %p (Difference: %ld bytes)\n", ptrCHAR, ptrCHAR + 1, (long)(ptrCHAR + 1) - (long)ptrCHAR);
    printf("Double Pointer  :   %p -> After Increment Operations : %p (Difference: %ld bytes)\n", ptrDOUBLE, ptrDOUBLE + 1, (long)(ptrDOUBLE + 1) - (long)ptrDOUBLE);
    return 0;
}