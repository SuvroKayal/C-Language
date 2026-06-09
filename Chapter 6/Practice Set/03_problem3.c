#include <stdio.h>
/*
Write a program to change the value of a variable to ten times of its current 
value. 
*/

void change_to_ten_times(int*);
void change_to_ten_times(int* a){
    *a = *a * 10;
}

int main() {
    int x = 30;
    printf("The value of x is: %d\n", x);
    change_to_ten_times(&x);
    printf("The value of x aftre 10 times is: %d\n", x);
    return 0;
}