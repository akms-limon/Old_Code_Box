// Use of continue statement. continue statement is opposite of break statement
#include <stdio.h>
int main()
{
    int n = 0;

    while (n < 10)
    {
        n = n + 1;
        if (n % 2 == 0)
        {
            continue; // continue means don't count when true. go to next statement
        }
         printf(" %d \n", n);
    }

    return 0;
}