//Using remainder find out odd and even number
#include<stdio.h>
int main()
{
    int number, remainder;
    number=5;
    remainder= number%2;

    if( remainder==0)   {
        printf("The number is even");
    }

    else    {
        printf("The number is odd");
    }

    return 0;
}