#include<stdio.h>
double area(double r)
{
    double a;
    a=3.1416*r*r;
    return a;
}
int main()
{
    double s;
    scanf("%lf", &s);
    double b= area(s);
    printf("%lf\n", b);
    return 0;
}