#include<stdio.h>
double add(double num1, double num2); //this line is called prototype
int main()
{
    double a, b, c;
    scanf("%lf %lf ", &a, &b);
    c=add(a, b);
    printf("%lf", c);
    return 0;
}
double add(double n1, double n2)
{
    double sum=n1+n2;
    return sum;
}