#include <stdio.h>
struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee Meta[100]; // an array of structures
    // we can access the data using:
    Meta[0].code = 100;
    Meta[1].code = 101;
    struct employee suvro = {100, 71.22, "Suvro"};
    printf("%d, %.3f, %s\n", suvro.code, suvro.salary, suvro.name); 
    return 0;
}