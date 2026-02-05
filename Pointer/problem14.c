// Write a c program that uses pointers to demonstrate initialization of structure members.
#include <stdio.h>
struct Student
{
    int roll;
    float marks;
};

int main()
{
    struct Student s1;
    struct Student *ptr = &s1;

    printf("Enter Student Roll No : ");
    scanf("%d",&ptr->roll);
    printf("Enter Student Marks : ");
    scanf("%f",&ptr->marks);

    printf("Student Roll: %d \n\tMarks: %.2f\n", ptr->roll, ptr->marks);
    return 0;
}