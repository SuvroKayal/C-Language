//Write a program to create a dynamic array of 5 floats using malloc()
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    // int arr[n]; //not allowed in c
    ptr[0] = 4.0;
    ptr[1] = 1.7;
    ptr[2] = 2.5;
    ptr[3] = 2.6;
    ptr[4] = 14.3;
    printf("The Elements of the array are: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", ptr[i]);
    }
    
    return 0;
}