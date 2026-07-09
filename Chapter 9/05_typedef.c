#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;

int main()
{
    //typedef struct employee Emp
    Emp e1; 
    Emp* ptr1 = &e1;
    e1.code = 1704;
    strcpy(e1.name, "Suvro");
    e1.salary = 40.17;
    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s", ptr1->code, ptr1->salary, ptr1->name);
    return 0;
}