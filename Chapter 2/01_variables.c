#include <stdio.h>

int main() {
    int i = 10;
    int j = i;
    int a = 2, b = 3, c = 4, d = 5;
    int w = 2,  x = 3, y = 4, z = 5;
    // %d is called format specifier
    // %d is for int, %f for float, %c for char
    printf("Value of i is %d and value of j is %d", i, j );
    printf("Value of a is %d, b is %d, c is %d, and d is %d\n", a, b, c, d );
    printf("Value of w is %d, x is %d, y is %d, and z is %d\n", w, x, y, z );
    return 0;
}