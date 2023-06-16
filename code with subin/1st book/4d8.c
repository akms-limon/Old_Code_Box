/*Do multiplication by plus. computer take more time to calculate multiplication.
for this we should avoid multiplication if we have the opurtunity to use plus.*/

#include<stdio.h>
int main()
{
    int m=0, a=5, n;

    for(n=1; n <= 10; n=n+1)
    {
        m=m+a;
        printf(" %d * %d = %d\n", a, n, m);
    }

    return 0;
}