#include <stdio.h>

int main()
{
    int i = 7;

    int *j = &i; // Pointer j stores the address of i

    int k = 67;

    // Prints the address of i using the address-of operator (&)
    printf("The address of i is: %p\n", &i);

    // Prints the address stored inside j
    // Since j contains the address of i, this will print the same address as above
    printf("The address of i is: %p\n", j);

    // Prints the address of k
    printf("The address of k is: %p\n", &k);

    // *j means "go to the address stored in j and fetch the value"
    // Since j points to i, it prints 7
    printf("The value at address j is %d\n", *j);

    // Prints the address of the pointer variable j itself
    // This is different from the address stored inside j
    printf("The address of j is %p\n", &j);

    // &i gives the address of i
    // *(&i) means "fetch the value stored at the address of i"
    // Therefore it prints 7
    printf("The value at address j is %d\n", *(&i));

    return 0;
}