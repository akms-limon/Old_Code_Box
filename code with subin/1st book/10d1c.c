#include<stdio.h>
#include<math.h>
int primeNumber(int n)
{
    int root = sqrt(n);
    if(n<2)
    return 0;
    else if(n==2)
    return 1;
    else if(n%2==0)
    return 0;
    else
    {
        for (int i = 3; i < root; i=i+2)
        {
            if(n%i==0)
            return 1;
            /* code */
        }
        
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    if(1==primeNumber(n))
    printf("%d is a prime number.\n", n);
    else
    printf("%d is not a prime number.\n", n);
    return 0;
}