/*
Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.
*/
#include <stdio.h>
typedef struct c
{
    int real, imaginary;
} complex;
void display(complex c)
{
    printf("The value of complex no. is: %d + %di\n", c.real, c.imaginary);
}
int main()
{
    complex c_array[5];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter real part: ");
        scanf("%d", &(c_array[i].real));
        printf("Enter imaginary part: ");
        scanf("%d", &(c_array[i].imaginary));
        display(c_array[i]);
    }

    return 0;
}