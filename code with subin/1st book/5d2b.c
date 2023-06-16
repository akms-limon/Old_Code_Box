// Equation solve medium

#include <stdio.h>
int main()
{
    double a1, b1, c1, a2, b2, c2, x, y, p;

    printf(" a1 =");
    scanf(" %lf", &a1);
    printf(" b1 =");
    scanf(" %lf", &b1);
    printf(" c1 =");
    scanf(" %lf", &c1);
    printf(" a2 =");
    scanf(" %lf", &a2);
    printf(" b2 =");
    scanf(" %lf", &b2);
    printf(" c2 =");
    scanf(" %lf", &c2);

    p = a1 * b2 - a2 * b1;

    if( (int)p==0 )
    {
        printf(" Value of x and y can not be determined");
    }

    else
    {
        x = (b2*c1-b1*c2)/p;
        y = (a1*c2-a2*c1)/p;

        printf(" X is : %lf  Y is : %lf", x, y);
    }

    return 0;
}