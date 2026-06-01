#include <stdio.h>

int main() {
    for (int i = 0; i < 15; i++)
    {
        if(i==5){
            // break; //exit the code now
            continue; //exit this iteration now
        }
        printf("i is %d\n", i);
    }
    printf("The for loop is done!");
    return 0;
}