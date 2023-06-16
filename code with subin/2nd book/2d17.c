#include<stdio.h>

int main()
{
    char c='a';
    char *p, **q;

    p=&c;
    q=&p;

    **q='B';
    printf("value of c is : %c\n", c);
    printf("value of c is : %c\n", *p);
    printf("value of c is : %c\n", **q);
    printf("value of *q is : %p\n", *q);
    return 0;
}