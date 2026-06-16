#include <stdio.h>

int main()
{
    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "suvro"; //same as writing {'s', 'u', 'v', 'r', 'o', '\0'}
    for (int i = 0; i < 5; i++)
    {
        printf("Character is: %c \n", st[i]);
    }

    return 0;
}