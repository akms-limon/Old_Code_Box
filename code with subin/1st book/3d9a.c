//find out upper case number and lower case number 
#include<stdio.h>
int main()
{
    char ch;
    printf(" enter a character :");
    scanf(" %c", &ch);
    
    if( ch >= 'a' && ch <= 'z')     {
        printf(" %c is a lower case character.", ch);
    }

    else if( ch >= 'A' && ch <= 'Z')    {
        printf(" %c is a upper case character.", ch);
    }

    return 0;
}