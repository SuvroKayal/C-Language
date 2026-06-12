#include <stdio.h>
/*
If S[3] is a 1-D array of integers then *(S+3) refers to the third element: 
(i) True. 
(ii) False.
(iii) Depends. 
*/
int main() {
    int S[3] = {0, 1, 2};
    int *ptr = S;
    printf("The value at address %p is %d: ", ptr + 2, *(S + 3));
    return 0;
}

//Answer: False