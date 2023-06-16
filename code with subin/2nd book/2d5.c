#include <stdio.h>

int main()
{
    int x=10;
    printf("the value of x is : %d\n", x);

    int *p;  //p=adress  && *p=value in that address.
    p=&x;
    *p=20;
    printf("the value of x is : %d\n", x);

    x=15;
    printf("the value of x is : %d\n", x);
    printf("value stored in address %p is : %d\n", p, *p);

    printf("adress of x is : %p\n", &x);
    printf("the value of p is : %p\n", p);
    return 0;
}