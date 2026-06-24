#include <stdio.h>
#include <string.h>

int main() {
    char c = 'd';
    int contains = 0;
    char str[] = "suvro";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
         contains = 1;
         break;
        }
    }
    if(contains){
        printf("Yes it contains");
    }
    else{
        printf("No it not contains");
    }
    return 0;
}