#include <stdio.h>

int main()
{
    char c1='t', c2='B';
    int n1=100, n2=10000;

    printf("Value of c1 is %c\t", c1);
    printf("Address of c1 is %p\n", &c1);

    printf("Value of c2 = %c\t\t", c2);
    printf("Adress of c2 = %p\n", &c2);

    printf("Value of n1 = %d\t", n1);
    printf("Adress of n1 = %p\n", &n1);

    printf("Value of n2 = %d\t", n2);
    printf("Adress of n2 = %p\n", &n2);
    
    return 0;
}