#include <stdio.h>
/*
Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.
*/
int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = a;
    printf("The value at address %u is %d: ", ptr + 2, *(ptr + 2));

    return 0;
}