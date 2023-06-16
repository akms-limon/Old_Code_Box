/* Is the (if) condition is true then 
the compiler don't count the else conditoin*/
#include<stdio.h>
int main()
{
    int a=10;

    if( a<30 )  {
        printf("This number is less then 30");
    }

    else if( a<50)  {
        printf(" This number is less then 50"); 
        /*the compiler don't count the else conditoin.
        beacause if condition is true*/
    }

    return 0;
}