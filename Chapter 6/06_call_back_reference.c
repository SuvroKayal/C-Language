#include <stdio.h>

int sum(int *, int *);
// sum should change the vlaue of x;
int sum(int *a, int *b)
{
    *a = 6;
    *b = 15;
    return *a + *b;
}

int main()
{
    int x = 4, y = 23;
    // The addresses of x and y are passed to the function, allowing it to directly access and modify the original variables using pointers; x is changed from 4 to 6 and the updated values are then added and returned.
    printf("The sum of %d & %d is %d\n", x, y, sum(&x, &y));
    printf("The value of x is: %d\n", x);
    return 0;
}