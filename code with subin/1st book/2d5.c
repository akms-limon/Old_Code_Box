/* We have to use double type function for real number.
 This program is wrong. We have to replace int by double.*/

#include <stdio.h>
int main()
{
    int a = 50.5, b = 50.98, sum;
    sum = a + b;
    printf(" Summation is : %d", sum);
    return 0;
}