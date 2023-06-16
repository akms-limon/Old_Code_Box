#include<stdio.h>
int main()
{
    int a, b, t, x, gcd;
    scanf("%d %d", &a, &b);
    if(a==0)
    printf("gcd is :%d", a);
    else if(b==0)
    printf("gcd is :%d", b);
    else
    {
        while(b!=0)
        {
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    printf("GCD is %d\n", gcd);
    return 0;    
}