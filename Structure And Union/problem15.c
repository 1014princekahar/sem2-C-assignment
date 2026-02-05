/*
Design a structure student_record to contain name, date of birth, and total marks obtained.
Use the date structure designed in problem4 to represent the date of birth.
Develop a program to read data for 10 students in a class and list them rank-wise.
*/
#include <stdio.h>

#define N 3

struct date
{
    int day;
    int month;
    int year;
};

struct student_record
{
    char name[30];
    struct date dob;
    float marks;
};


void input_student_record(struct student_record s[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%[^\n]s", s[i].name);
        getchar();

        printf("Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &s[i].dob.day, &s[i].dob.month, &s[i].dob.year);
        getchar();

        printf("Total Marks: ");
        scanf("%f", &s[i].marks);
        getchar();
    }
}

void sort_rankwise(struct student_record s[])
{
    int i, j;
    struct student_record temp;

    for (i = 0; i < N - 1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (s[i].marks < s[j].marks)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void display(struct student_record s[])
{
    int i;

    printf("\nRANK-WISE STUDENT LIST\n");
    printf("------------------------------------------------------\n");
    printf("Rank  Name            DOB              Marks\n");
    printf("------------------------------------------------------\n");

    for (i = 0; i < N; i++)
    {
        printf("%-5d %-15s %02d/%02d/%04d       %-10.2f\n", i + 1, s[i].name, s[i].dob.day, s[i].dob.month, s[i].dob.year, s[i].marks);
    }
}

int main()
{
    struct student_record student[N];

    input_student_record(student);
    sort_rankwise(student);
    display(student);

    return 0;
}