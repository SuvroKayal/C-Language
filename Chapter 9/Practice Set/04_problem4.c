/*
Write a program to illustrate the use of arrow operator → in C.
*/
#include <stdio.h>
typedef struct employee
{
    int score;
    float salary;
}Emp;

int main() {
    Emp e1;
    Emp* ptr = &e1;
    ptr->salary = 17.4;
    ptr->score = 100;

    printf("The value of the salary is %.2f and the score is %d\n", ptr->salary, ptr->score);
    return 0;
}