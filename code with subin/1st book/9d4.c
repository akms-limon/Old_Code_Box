#include<stdio.h>
int main()
{
    char country[]={'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    int i, length=10;
    printf("%s\n", country);
    for(i=0; i<10; i++)
    {
        if(country[i]>='a' && country[i]<='z')
        {
            country[i]='A'+country[i]-'a';
        }
    }
    printf("%s\n", country);
    return 0;
}