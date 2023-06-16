/* Loop. print 1 to 3. 
Alternative use of    [ printf(" %d", n); n=n+1;]     is     [ printf(" %d", n++); ]   */

#include <stdio.h>
int main()
{
    int n = 1;
    printf(" %d\n", n++);
    
    printf(" %d\n", n++);

    printf(" %d\n", n++);

    printf(" %d\n", n++);

    printf(" %d\n", n++);

    printf(" %d\n", n++);

    printf(" %d\n", n++);

    printf(" %d\n", n++);

    printf(" %d\n", n++);

    printf(" %d\n", n++);

    return 0;
}