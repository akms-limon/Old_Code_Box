#include <stdio.h>

int main()
{
    int x=10;
    int *p=NULL;

    printf("the value of x is : %d\n", x);
    printf("the value of *p is : %d\n", *p); //wrong beacause we have to point the pointer must. then we can print the value of *p
    
    return 0;
}