// another methood of 3d3
#include<stdio.h>
int main()
{
    double a;
    printf("please enter a number :");
    scanf(" %lf", &a);

    if( a<0)   {
        printf("This number is negative.");
    }

    else if( a>0)   {
        printf(" This number is positive.");
    }

    else    {
        printf(" This number is zero!");
    }

    return 0;
}