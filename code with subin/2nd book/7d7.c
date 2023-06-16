#include<stdio.h>

int main()
{
    void *p;
    int x=10;
    p=&x;
    printf("the value of p is : %d\n\n", *((int*)p));
    return 0;
}