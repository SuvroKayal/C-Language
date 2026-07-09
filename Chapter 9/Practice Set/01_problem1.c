//Create a two-dimensional vector using structures in C.
#include <stdio.h>

struct vector{
    int i, j;
};
int main() {
    struct vector v = {17, 4};
    {
        printf("The value of the vector is %di + %dj", v.i, v.j);
    };
    
    return 0;
}