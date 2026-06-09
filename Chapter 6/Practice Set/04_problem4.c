#include <stdio.h>

//Write a function and pass the value by reference.

void variable(int*);
void variable(int* a){
    *a = 60;
}

int main() {
    int x = 30;
    printf("The value of x is: %d\n", x);
    variable(&x);
    printf("The value of x is: %d\n", x);
    return 0;
}