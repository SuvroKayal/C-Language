#include <stdio.h>
#include <string.h> //it is used when we are dealing with strings

int main()
{
    char st[] = "Suvro";
    printf("%d\n", strlen(st));

    char target[30];
    strcpy(target, st);
    printf("%s, %s\n", st, target);

    char s1[12] = "hello";
    char s2[] = "suvro";
    strcat(s1, s2); // s1 now contains "hellosuvro" <no space in between>
    printf("%s\n", s1);

    int a = strcmp("Bright", "Devotion");
    printf("%d\n", a);

    int b = strcmp("Devotion", "Bright");
    printf("%d\n", b);
    return 0;
}