// do sum by using printf
#include<stdio.h>
int main()
{
    int a, b;
    printf("\n \n Enter a number : ");
    scanf(" %d", &a);
    printf(" Enter another number : ");
    scanf(" %d", &b);
    printf(" %d + %d = %d \n", a, b, a+b);
    printf(" %d - %d = %d \n", a, b, a-b);
    printf(" %d * %d = %d \n", a, b, a*b);
    printf(" %d / %d = %d \n \n", a, b, a/b);
    return 0;

}