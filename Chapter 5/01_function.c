#include <stdio.h>

int sum(int, int); //Function prototype

//Function defination    
int sum(int x, int y){
    // printf("The sum is %d\n", x+y);
    return x+y;
}
int main() {

    int a1 = 5, b1 = 10;
    int c1 = sum(a1,b1); //Function call
    printf("The value of C is: %d\n", c1);

    // int a2 = 15, b2 = 17;
    // sum(a2,b2);

    // int a3 = 7, b3 = 13;
    // sum(a3,b3);

    // int a4 = 5, b4 = 49;
    // sum(a4,b4);
    // sum(49, 67);
    return 0;
}