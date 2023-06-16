/* Is the (if) condition is true then 
the compiler don't count the else conditoin. 
But conpiler read all of the (if) condition*/
#include<stdio.h>
int main()
{
    int a;
    printf(" Enter a real number :");
    scanf(" %d", &a);

    if( a<30)   {
        printf(" This number is less than 30\n");
    }

    if( a<50 )  {
    printf(" This number is less than 50 ");
    }

    return 0;
}