#include<stdio.h>

int add(int n1, int n2)
{
    return n1+n2;
}
int sub(int n1, int n2)
{
return n1-n2;
}
int main()
{
    int (*fnc)(int, int);

    int n1=10, n2=20;

    fnc=&add;
    printf("%d\n", fnc(n1, n2));

    fnc=&sub;
    printf("%d\n", fnc(n1, n2));

    return 0;
}