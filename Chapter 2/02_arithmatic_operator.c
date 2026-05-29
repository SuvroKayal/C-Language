#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a + b;
    printf("The sum of %d and %d is %d\n", a, b, c);
    // modulus operator
    printf("The remainder when %d is divided by %d is %d", a, b, a % b);
    return 0;
}