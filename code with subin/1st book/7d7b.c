#include<stdio.h>
int find_min(int ara[], int n)
{
    int min=ara[0];
    int i;
    for(i=0; i<n; i++)
    {
        if(ara[i]<min)
        {
            min=ara[i];
        }
    }
    return min;
}
int main()
{
    int ara[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int m=find_min(ara, n);
    printf("%d\n", m);
    return 0;
}