#include<stdio.h>
double pi=3.1416; //global variable

void my_fnc()//local variable
{
    pi=3.14;
}
int main()
{
    printf("%lf\n", pi);
    my_fnc();
    printf("%lf\n", pi);
    
    return 0;
}