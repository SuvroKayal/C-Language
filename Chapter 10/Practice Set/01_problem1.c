// Write a program to read three integers from a file.
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("File.txt", "r");
    int num1, num2, num3;
    fscanf(fptr, "%d %d %d", &num1, &num2, &num3);
    printf("The Values are: %d, %d, %d", num1, num2, num3);
    fclose(fptr);
    return 0;
}