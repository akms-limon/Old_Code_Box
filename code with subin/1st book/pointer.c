#include <stdio.h>

int main()
{
    int *p;
    int a = 20;

    p = &a;

    *p = 34;

    printf("%d\n", *p);
    printf("%d\n", a);

    return 0;
}