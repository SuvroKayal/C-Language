#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The Elements of the array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}