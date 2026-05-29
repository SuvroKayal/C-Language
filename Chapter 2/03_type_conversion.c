#include <stdio.h>

int main() {
    float a = 9;
    int b = 2;
    float c = a/b;
    printf("The value of a/b = %f", c);
    return 0;
}

/*
In programming, type compatibility is crucial. For int a = 3.5;, the float 3.5 is 
demoted to 3, losing the fractional part because a is an integer. Conversely, for float 
a = 8;, the integer 8 is promoted to 8.0, matching the float type of a and retaining 
precision. 
*/