#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("suvro.txt", "a");
    char ch = 'S';
    fprintf(fptr, "%c", ch);

    fclose(fptr);
    return 0;
}