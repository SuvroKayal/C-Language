#include <stdio.h>

int main() {
    int i = 5;
    printf("The value of i is %d\n", i);
    i = i + 5; //5 +5 = 10
    printf("The value of i is %d\n", i);
    // i++; // 10+1 = 11
    printf("The value of i is %d\n", i++);//10
    // i++ prints i first then increment (post increment operator)
    // ++i increment i first then prints (post increment operator)
    printf("The value of i is %d\n", i);//11

    i +=2; // same as i = i+2
    printf("The value of i is %d\n", i);

    return 0;
}