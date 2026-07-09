//Write a program with a structure representing a complex number
#include <stdio.h>
typedef struct c{
    int real, imaginary;
} complex;

int main() {
    complex c = {1, 2};
    printf("The value complex no. is: %d + %di", c.real, c.imaginary);
    return 0;
}