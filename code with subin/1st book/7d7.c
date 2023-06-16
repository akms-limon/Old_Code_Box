#include<stdio.h>
int find_max(int ara[], int n);
int main()
{
    int ara[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int m=find_max(ara, n);
    printf("%d\n", m);
    return 0;
}
int find_max(int ara[], int n)
{
    int max=ara[0];
    int i;
    for(i=0; i<n; i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
    }
    return max;
}