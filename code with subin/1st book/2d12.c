// scanf(" %c", ch); is similar to ch=getchar();
#include<stdio.h>
int main()
{
    char firstcharacter;
    printf("\n\n Enter the first character of your name is :\n");
    firstcharacter=getchar();
    printf(" The first character of your name is : %c\n\n", firstcharacter);
    return 0;
}