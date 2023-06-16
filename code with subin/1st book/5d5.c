// summation of natural numbers
#include <stdio.h>
int main()
{
    int i, sum = 0, n;

    printf(" please enter the value of n =");
    scanf(" %d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("the value of sum is : %d", sum);

    return 0;
}
