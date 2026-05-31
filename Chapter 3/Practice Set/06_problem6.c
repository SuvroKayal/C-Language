#include <stdio.h>
// Write a program to find greatest of four numbers entered by the user. 
int main() {
    int a = 4, b = 40, c = 34, d = 45;
        if (a>b && a>c && a>d)
        {
            printf("%d is greatest among the 4 numbers", a);
        }
        else if (b>a && b>c &&  b>d)
        {
            printf("%d is greatest among the 4 numbers", b);
        }
        else if (c>b && c>a && c>d)
        {
            printf("%d is greatest among the 4 numbers", c);
        }
        else if (d>b && d>c && d>a)
        {
            printf("%d is greatest among the 4 numbers", d);
        }
        else{
            printf("All are equal!");
        }
    return 0;
}