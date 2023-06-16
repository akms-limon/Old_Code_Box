#include <stdio.h>

int a;
static int b;

void func()
{
    a=a+1;
    b=b+1;
}

int main()
{
    func();
    printf("%d\n", a);
    printf("%d", b);
    
    return 0;
}