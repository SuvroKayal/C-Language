#include <stdio.h>
/*
Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal.
*/
int main()
{
    char str[6];
    // scanf("%s", str);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin); 
        // Attempt to clear any remaining characters (such as '\n') here it is basically the enter that we are pressing after entering our characters;
    }
    str[5] = '\0';

    printf("%s", str);

    return 0;
}