#include<stdio.h>

int main()
{
    char *str="Bangladesh";
    printf("%c %c %c\n", *str,*(str+1), *(str+2));
    printf("%c %c %c\n", *str, *str+1, *str+2);
    return 0;
}