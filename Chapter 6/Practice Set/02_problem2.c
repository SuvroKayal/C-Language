#include <stdio.h>

// Function receives a pointer to an integer
int returning_5(int *ptr)
{
    // ptr stores the address of i
    // Therefore this prints the address of i
    printf("The value of ptr is: %p\n", ptr);

    // *ptr means "go to the address stored in ptr"
    // and fetch the value stored there
    // Since ptr points to i, this prints the value of i (2)
    printf("The value at address ptr is: %d\n", *ptr);

    return 5;
}

int main()
{
    int i = 2;

    // ptr stores the address of i
    int *ptr = &i;

    // &i gives the address of i
    printf("The address of i is: %p\n", &i);

    // Passing ptr to the function
    // The function receives a copy of ptr,
    // but that copy still contains the address of i
    returning_5(ptr);

    return 0;
}