#include<stdio.h>

int main()
{
    char c='A';
    char *p, **q;

    p=&c;
    q=&p;

    printf("value of c is : %c\n", c);
    printf("value of c is : %c\n", *p);
    printf("value of c is : %c\n", **q);
    return 0;
}