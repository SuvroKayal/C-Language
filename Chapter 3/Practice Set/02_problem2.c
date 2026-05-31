#include <stdio.h>
/*
Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. 
*/
int main() {
    int marks1, marks2, marks3;
    printf("Enter marks of 1st subject: ");
    scanf("%d", &marks1);
    printf("Enter marks of 2nd subject: ");
    scanf("%d", &marks2);
    printf("Enter marks of 3rd subject: ");
    scanf("%d", &marks3);
    printf("The marks are %d %d and %d\n", marks1, marks2, marks3);

    if(marks1<33 || marks2<33 || marks3 <33){
        printf("You are failed due to less number in individual subjects");
    }
    else if ((marks1 + marks2 + marks3)/3<40){
        printf("You are failed due to lower percentage!");
    }
    else{
        printf("You are passed!");
    }
    return 0;
}