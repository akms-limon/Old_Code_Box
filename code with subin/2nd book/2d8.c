#include <stdio.h>

int main()
{
    int x=10;
    int *p;
    int y;
    int *q;
    
    p=&x;
    q=&y;
    *p=15;
    *q=20;
    printf("value of x is : %d\n", x);
    printf("value of y is : %d\n", y);
    printf("value of *p is : %d\n", *p);
    printf("value of *q is : %d\n", *q);
    printf("address of x is : %p\n", &x);
    printf("value of p is : %p\n", p);
    printf("address of y is : %p\n", &y);
    printf("value of q is : %p\n", q);
    
    return 0;
}