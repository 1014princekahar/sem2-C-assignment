// Write a C program for demonstrating operations on individual structure members using pointer notation.

#include <stdio.h>

/* Structure definition */
struct student
{
    int roll_no;
    float marks;
};

int main()
{
    struct student s, *ptr;

    ptr = &s;

    ptr->roll_no = 101;
    ptr->marks = 88.50;

    printf("Roll Number : %d\n", ptr->roll_no);
    printf("Marks       : %.2f\n", ptr->marks);

    return 0;
}
