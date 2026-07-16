#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));

    ptr[0] = 3;
    ptr[1] = 6;

    printf("Before realloc: %d %d\n", ptr[0], ptr[1]);

    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    for (int i = 5; i < 10; i++)
    {
        ptr[i] = i + 1;
    }

    printf("After realloc:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}