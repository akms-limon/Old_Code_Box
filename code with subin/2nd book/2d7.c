#include <stdio.h>

int main()
{
    int x=10;
    int *p;
    int y;
    int *q;

    p=&x;
    y=*p;
    *p=15;
    *q=20;   //we cannot assign any value in a pointer without pointing any variable.

    printf("value of x is : %d\n", x);
    printf("value of y is : %d\n", y);
    printf("value of *p is : %d\n", *p);
    printf("value of *q is : %d\n", *q);
    
    return 0;
}