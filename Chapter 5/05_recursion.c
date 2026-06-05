#include <stdio.h>

int factorial(int);

int factorial(int n){
    if( n ==1 || n== 0){ //Base Condition
        return 1;
    }
// Factorial(n) = Factorial(n-1) x n
    return n * factorial(n-1) ;

}
/*
Factorial(5) = 1x2x3x4x5
Factorial(4) = 1x2x3x4
Factorial(3) = 1x2x3
Factorial(n-1) = 1x2x3x...x(n-1)
Factorial(n) = 1x2x3x...x(n-1)xn

Factorial(n) = Factorial(n-1) x n
*/


int main() {
    int a = 6;
    printf("The factorial of %d is: %d\n", a, factorial(a));
    return 0;
}
//Tip: Use any AI for checking any kind of "memory error"