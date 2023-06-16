#include <stdio.h>

int main()
{
    int x=10;
    int *p=NULL;

    printf("the value of x is : %d\n", x);
    p=&x;
    printf("the value of *p is : %d\n", *p); 
    return 0;
}