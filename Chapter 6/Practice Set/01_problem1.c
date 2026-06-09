#include <stdio.h>
/*
Write a program to print the address of a variable. Use this address to get the 
value of the variable. 
*/
int main() {
    int i = 2;
    int* ptr = &i;
    printf("The address of i is: %p\n", &i);
    printf("The address of i is: %d\n", *ptr);
    return 0;
}