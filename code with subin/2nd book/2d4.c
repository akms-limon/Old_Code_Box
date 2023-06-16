#include<stdio.h>

int main()
{
    int x=10;
    int *p;

    p=&x;

    printf("value of x is : %d\n", x);

    *p=20;

    printf("value of x is : %d\n", x);
    printf("value of p is : %p\n", p);
    printf("address of x is : %p\n", &x);
    printf("value of p* is : %d\n", *p);
    return 0;
}