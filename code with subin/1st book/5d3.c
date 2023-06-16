// Calculation of loan.

#include <stdio.h>
int main()
{
    double P, x, r, n, I, A;

    printf(" principal = ");
    scanf(" %lf", &P);

    printf(" persentance of enterest is =");
    scanf(" %lf", &x);

    r= x/100;

    printf(" year =");
    scanf(" %lf", &n);

    I=P*r*n;

    A=I+P;

    printf(" total amount of interest is = %lf \n", I);

    printf(" total amount of interest-principal is = %lf", A);


}