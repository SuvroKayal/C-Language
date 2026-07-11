/*
Take name and salary of two employees as input from the user and write them to
a text file in the following format:
            i. Name1, 3300
            ii. Name2, 7700
*/
#include <stdio.h>

int main()
{
    FILE *fptr;
    char name1[34], name2[34];
    float salary1, salary2;
    fptr = fopen("employeed2.txt", "w");
    printf("In this program you can store name and salary of 2 employee\n");
    printf("Enter name of the Employee: ");
    scanf("%s", name1);
    printf("Enter salary of the Employee: ");
    scanf("%f", &salary1);

    printf("Enter The name of Employee: ");
    scanf("%s", name2);
    printf("Enter salary of the Employee: ");
    scanf("%f", &salary2);

    // Details of Employee 1 to be print
    fprintf(fptr, "%s", name1);
    fprintf(fptr, "%s", ", ");
    fprintf(fptr, "%.2f", salary1);
    fprintf(fptr, "%c", '\n');
    // Details of Employee 2 to be print
    fprintf(fptr, "%s", name2);
    fprintf(fptr, "%s", ", ");
    fprintf(fptr, "%.2f", salary2);
    fprintf(fptr, "%c", '\n');
    fclose(fptr);
    return 0;
}
