#include <stdio.h>
//What will be the output of this program
    // int a = 10; 
    // if (a = 11) 
    // printf("I am 11"); 
    // else  
    // printf("I am not 11");
int main() {
    int a = 10; 
        if (a = 11) //it is only '=' not '=='
            printf("I am 11"); //true
        else  
            printf("I am not 11"); //false
    return 0;
}
//output: I am 11