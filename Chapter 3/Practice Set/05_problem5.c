#include <stdio.h>
/*Write a program to determine whether a character entered by the user is 
lowercase or not. */
int main() {
    //https://ics.uci.edu/~pattis/common/handouts/ascii.html
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The character is %c\n", ch);
    printf("The character is %d\n", ch);
    //97, 122
    if(ch >= 97 && ch <= 122){
        printf("The character is lower case");
    }
    else{
        printf("The character is not lower case");
    }
    return 0;
}