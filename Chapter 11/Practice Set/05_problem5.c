/*Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to 
make it store 15 number (from 7 x 1 to 7 x 15).*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;
    int* ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter 5 element for your array\n");
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }
    ptr = (int *)realloc(ptr, 15 * sizeof(int));

    for (int i = 0; i < 15; i++)
    {
        ptr[i] = 7*(i+1);
    }

    for (int i = 0; i < 15; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}