#include <stdio.h>

int main()
{
    char c1='A';
    char *p;
    p=&c1;
    printf("the value of *p is : %c\n", *p);
    
    return 0;
}