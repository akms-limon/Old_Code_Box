//make multiplication table 1 to 20 by only one program. nested loop= a loop into a loop. 

#include<stdio.h>
int main()
{
    int i, n;

    for(i=1; i<=20; i++)
    {
        for( n=1; n<=10; n++)
        {
            printf(" %d * %d = %d \n", i, n, i*n );
        }
    }

    return 0;
}