#include<stdio.h>
int add(int num1, int num2)
{
    double sum = num1+num2;
    return sum;
}
int main()
{
    double a,b, c;
    scanf("%lf %lf ", &a, &b);
    c=add(a,b);
    printf("%lf", c);
     return 0;
}