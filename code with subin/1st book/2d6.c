// We can replace real type data type to integer type by using b=(int)a

#include <stdio.h>
int main()
{
    double x, n;
    x = 10.5;
    n = (int)x;  //The value of n is turned into integer type. 
    printf("\n The value of x is : %lf \n", x);
    printf("The value of n is : %lf \n\n", n);
    return 0;
}