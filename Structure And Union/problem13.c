/*
Define a stricture that can describe and hotel. It should have member that includes the name, address, grade, average room charge , and number of rooms.
Write functions to perform the following operations:
    A. To print out hotels of a given grade in order of charges
    B. To print out hotels with room charges less than a given value
*/

#include <stdio.h>
#include <string.h>
#define MAX 5 // define macro

struct hotel
{
    char name[50];
    char address[100];
    int grade;
    float avg_room_charge;
    int no_of_rooms;
}h[MAX];

void print_by_grade(struct hotel h[], int n, int grade)
{
    struct hotel temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (h[i].avg_room_charge > h[j].avg_room_charge)
            {
                temp = h[i];
                h[i] = h[j];
                h[j] = temp;
            }
        }
    }

    printf("\nHotels of Grade %d in order of charges:\n", grade);
    for (int i = 0; i < n; i++)
    {
        if (h[i].grade == grade)
            printf("Name: %s, Address: %s, Charge: %.2f\n",h[i].name, h[i].address, h[i].avg_room_charge);
    }
}

void print_by_charge(struct hotel h[], int n, float maxCharge)
{
    printf("\nHotels with room charge less than %.2f:\n", maxCharge);
    for (int i = 0; i < n; i++)
    {
        if (h[i].avg_room_charge < maxCharge)
            printf("Name: %s, Address: %s, Charge: %.2f\n",h[i].name, h[i].address, h[i].avg_room_charge);
    }
}

int main()
{
    int n = MAX, grade;
    float charge;
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of hotel %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", h[i].name);
        printf("Address: ");
        scanf(" %[^\n]", h[i].address);
        printf("Grade: ");
        scanf("%d", &h[i].grade);
        printf("Average Room Charge: ");
        scanf("%f", &h[i].avg_room_charge);
        printf("Number of Rooms: ");
        scanf("%d", &h[i].no_of_rooms);
    }
    printf("\nEnter grade to search: ");
    scanf("%d", &grade);
    print_by_grade(h, n, grade);

    printf("\nEnter maximum room charge: ");
    scanf("%f", &charge);
    print_by_charge(h, n, charge);

    return 0;
}