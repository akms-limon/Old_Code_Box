#include<stdio.h>
double avg(double ara[], double n)
{
    int i=0;
    double m=0;
    for(i=0; i<n; i++)
    {
        m=m+ara[i];
    }
    double avg=m/n;
    return avg;
}
int main()
{
    double ara[]={1,2,3,4,5,6,7,8,9,10};
    double n=10;
    double a=avg(ara, n);
    printf("%.2lf\n", a);
    return 0;
}