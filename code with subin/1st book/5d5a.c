//summation of first n odd numbers
#include <stdio.h>
int main()
{
    int i, n, sum;
    printf(" Enter the value of n =");
    scanf(" %d", &n);

    for( i=1, sum=0; i<=n; i=i+2)
    {
        sum= sum+i;
    }
    printf(" sum is = %d", sum);
    return 0;
}