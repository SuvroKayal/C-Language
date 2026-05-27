/*
2. Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height. 
*/

#include <stdio.h>

int main() {
    int r = 6;
    int height = 10;
    printf("The area of circle with radius %d is: %f\n", r, 3.14*r*r);
    printf("The area of cylinder with radius %d and heigth %d is: %f", r, height, 3.14*r*r*height);
    return 0;
}