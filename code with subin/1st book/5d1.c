//Equation calculation. easy 

#include <stdio.h>
int main()
{
    double x, y, x_plus_y, x_minus_y;
    
    printf(" Enter the value of x_plus_y : ");
    scanf(" %lf", &x_plus_y);
    
    printf(" Enter the value of x_minus_y :");
    scanf(" %lf", &x_minus_y);

    x = (x_plus_y + x_minus_y)/2;
    y = (x_plus_y - x_minus_y)/2;

    printf(" The value of X is : %lf", x);
    printf(" The value of Y is : %lf", y);

    return 0;
}