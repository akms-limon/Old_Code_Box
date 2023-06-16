#include<stdio.h>
int sum(int ara[], int n)
{
    int i=0;
    int s=0;
    for(i=0; i<n; i++)
    {
        s=s+ara[i];
    }
    return s;
}
int main()
{
    int ara[]={1,2,3,4,5,6,7,8,9,10};
    int p=10;
    int a=sum(ara, p);
    printf("%d\n", a);
    return 0;
}