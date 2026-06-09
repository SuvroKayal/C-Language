#include <stdio.h>

/*
Write a program to print the value of a variable i by using “pointer to pointer” type 
of variable. 
*/

int main() {
    int i = 2;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;
    printf("The address of i is: %p\n", &i);
    printf("The address of i is: %p\n", *ptr1);
    printf("The address of i is: %p\n", **ptr2);
    return 0;
}