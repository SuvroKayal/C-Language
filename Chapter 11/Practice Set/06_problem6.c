/*Attempt problem 4 using calloc().*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int* ptr;
    ptr = (int *)calloc(n, sizeof(int));
    printf("Enter 5 element for your array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    printf("Enter 5 more elements:\n");
    for (int i = 5; i < 10; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}