#include <stdio.h>

int main() {
    //Pointer Arithmatic using Integer pointer;
    // int a = 5;
    // int* ptr = &a;
    // printf("The address of a is: %u\n", ptr);
    // printf("The address of a is: %u\n", &a);
    // ptr++;
    // printf("The value of pointer is: %u\n", ptr);


    //Pointer Arithmatic using Character pointer;
    char a = 'A';
    char* ptr = &a;
    printf("The address of a is: %u\n", ptr);
    printf("The address of a is: %u\n", &a);
    ptr++;
    printf("The value of pointer is: %u\n", ptr);
    return 0;
}

/*
Output: 
for Integer pointer:
The address of a is: 6422296
The address of a is: 6422296
The value of pointer is: 6422300 [As Integer takes 4 byte so the pointer is increased by 4]
for Character pointer:
The address of a is: 6422299
The address of a is: 6422299
The value of pointer is: 6422300 [As Character takes 1 byte so the pointer is increased by 1]
*/