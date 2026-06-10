#include <stdio.h>

int main() {
    int cgpa[3] = {9, 8, 8}; // arrays can be initialized while declaration 
     for (int i = 0; i < 3; i++)
    {
        printf("the value of marks at %d is: %d\n",i, cgpa[i]);
    }
    return 0;
}