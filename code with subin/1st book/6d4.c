#include<stdio.h>
int main()
{
    int ara[10]={1,2,3,4,5,6,7,8,9,0};
    int i;
    for(i=0; i<=9; i++)
    {
        printf(" %dth element is :%d\n", i+1, ara[i]);
    }
    return 0;
    
}