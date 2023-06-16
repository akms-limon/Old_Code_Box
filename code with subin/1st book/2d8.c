//We can limit the  after decimal point d

#include <stdio.h>
int main()
{
    double a, b, sum;
    a = 10.76;
    b = 57.75;
    sum = a + b;
    printf("The value of sum is : %lf\n", sum);
    printf("The value of sum is : %.2lf\n", sum);
    return 0;
}