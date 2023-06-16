#include <stdio.h>

void func()
{
    int a=10;
    static int b=10;
    a=a+2;
    b=b+2;

    printf("a = %d \t b = %d\n", a, b);
}
int main()
{
    func();
    func();
    func();
    return 0;
}