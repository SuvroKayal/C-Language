#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee e1; // creating a structure variable
    strcpy(e1.name, "Suvro");
    e1.code = 100;
    e1.salary = 71.22;
    printf("%d %.2f %s", e1.code, e1.salary, e1.name);
    return 0;
}