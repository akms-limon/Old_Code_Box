// find out vowel and consonant using or(||) operator
#include<stdio.h>
int main()
{
    char ch;
    printf(" enter a character : ");
    scanf(" %c", &ch);

    if( ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || 
    ch=='o' || ch=='O' || ch=='u' || ch=='U' )    {
        printf(" This character is vowel");
    }

    else    {
        printf(" This character is consonant");
    }

    return 0;
}