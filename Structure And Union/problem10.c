/*
Add a function to the program of problem 9 that accepts two vectors as input parameter and return the addition of two vectors.
*/

#include <stdio.h>

struct vector
{
    int arr[100];
    int size;
} v1, v2, ans;

void create_vector(struct vector *v)
{
    printf("Enter size of vector: ");
    scanf("%d", &v->size);

    printf("Enter %d elements:\n", v->size);
    for (int i = 0; i < v->size; i++)
        scanf("%d", &v->arr[i]);
}

int addition_of_vectors(struct vector *v1, struct vector *v2, struct vector *addition)
{
    if (v1->size != v2->size)
        return 0;

    addition->size = v1->size;

    for (int i = 0; i < v1->size; i++)
    {
        addition->arr[i] = v1->arr[i] + v2->arr[i];
    }
    return 1;
}

void display_vector(struct vector v)
{
    printf("( ");
    for (int i = 0; i < v.size; i++)
    {
        printf("%d", v.arr[i]);
        if (i != v.size - 1)
            printf(", ");
    }
    printf(" )\n");
}

int main()
{
    printf("Enter First Vector : \n");
    create_vector(&v1);

    printf("Enter Second Vector : \n");
    create_vector(&v2);

    if (addition_of_vectors(&v1, &v2, &ans))
    {
        printf("Resultant vector after addition:\n");
        display_vector(ans);
    }
    else
        printf("Vector addition not possible. Sizes are different.\n");
    return 0;
}