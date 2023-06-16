#include<stdio.h>

int f_call=0;

int factorial(int n)
{
    f_call++;
    if(n==0)
    {
        return 1;
    }  
    return n*factorial(n-1);         
}
int main()
{
    int n; 
    scanf("%d", &n);
    printf("factorial is : %d\n", factorial(n));
    printf("the function reapeted for %d times. ", f_call);
    return 0;
}