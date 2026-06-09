#include <stdio.h>

/*
Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values of sum and average in main(). 
*/
int* sum(int , int);
int* sum(int a, int b){
    int s = a+b;
    int* ptr1 = &s;
    printf("The sum is: %d\n", s);
    return ptr1;
}

float* average(int , int);
float* average(int a, int b){
    float avg = (a+b)/2.0;
    float* ptr2 = &avg;
    printf("The average is: %.2f\n", avg);
    return ptr2;
}


int main() {
    int x = 4, y = 6;
    
    int* ptr1 = sum(x, y);
    float* ptr2 = average(x,y);

    printf("The address of sum is %p and the address of average is %p", ptr1, ptr2);

    return 0;
}