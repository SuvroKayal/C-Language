/*Write a program to create an array of size n using calloc where n is an 
integer entered by the user.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float *ptr;
    printf("Enter the Size of your array: ");
    scanf("%d", &n);
    ptr = (float*)calloc(n, sizeof (float));
    printf("Enter %d elemnts for your array\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &ptr[i]);
    }

    printf("The Elements of the array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", ptr[i]);
    }
    
    return 0;
}