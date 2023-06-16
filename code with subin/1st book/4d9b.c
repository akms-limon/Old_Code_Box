//make multiplication table 1 to 20 by only one program. do the multiplication by plus.

#include<stdio.h>
int main()
{
    int i, n, m=0;

    for(i=1; i<=20; i++)
    {
        for(n=1; n<=10; n++)
        {
            m=m+n;
            printf(" %d * %d = %d\n", i, n, m*n);
        }
    }

    return 0;
}