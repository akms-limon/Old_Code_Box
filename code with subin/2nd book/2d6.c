#include<stdio.h>

int main()
{
    int x=10;
    int *p;

    p=&x;

    int y=*p;

    *p=15;
    printf("the value of x is : %d\n", x);
    printf("the value of y is : %d\n", y);
    printf("the value of *p is : %d\n", *p);
    printf("address of x is : %p\n", &x);
    printf("address of y is : %p\n", &y);
    printf("vlaue of p is : %p\n", p);
    return 0;
}