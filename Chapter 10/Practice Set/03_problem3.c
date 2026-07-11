/*
Write a program to read a text file character by character
and write its content twice in a separate file.
*/

#include <stdio.h>

int main()
{
    FILE *ptr1, *ptr2;
    int ch;

    ptr1 = fopen("file1.txt", "r");
    ptr2 = fopen("file2.txt", "w");

    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    while ((ch = fgetc(ptr1)) != EOF)
    {
        fprintf(ptr2, "%c", ch);
        fprintf(ptr2, "%c", ch);
    }

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}