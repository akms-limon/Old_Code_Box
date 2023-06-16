#include<stdio.h>

int main()
{
    int x=10;
    int *p;  //p=adress of x, &x=the address of x and *p=value in that address,

    p=&x;  //assign the address of x in the address of p.

    printf("*p = %d\n", *p);
    printf("value of p is : %p", p);
    return 0;
}