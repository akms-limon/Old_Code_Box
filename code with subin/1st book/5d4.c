// how to summation natural numbers

#include <stdio.h>
int main()
{
    int n, sum;
    printf(" Enter the the valu of n = ");
    scanf(" %d", &n);
    sum = (n * (n + 1))/2;
    printf(" sum is: %d", sum);
    return 0;
}