//Full from of 2d14.c
#include<stdio.h>
int main()
{
    int a, b, value;
    char sign;
    printf(" Enter your first number :");
    scanf(" %d", &a);
    printf(" Enter your second number :");
    scanf(" %d", &b);
    value=a+b;
    sign='+';
    printf(" %d %c %d = %d\n", a, sign, b, value);
    value= a-b;
    sign='-';
    printf(" %d %c %d = %d\n", a, sign, b, value);
    value= a*b;
    sign='*';
    printf(" %d %c %d = %d\n", a, sign, b, value);
    value=a/b;
    sign='/';
    printf(" %d %c %d = %d\n", a, sign, b, value);
    return 0;
}