#include<stdio.h>
int primeNumber(int n)
{
    if(n<2)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    if(n%2==0)
    {
        return 0;
    }
    
}