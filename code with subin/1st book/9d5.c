#include<stdio.h>
int main()
{
    char country[]={'B', 'a', 'N', 'g', 'L', 'a', 'D', 'e', 'S', 'h', '\0'};
    printf("%s\n", country);
    int i, length=10;
    for(i=0; i<length; i++)
    {
        if(country[i]>='A' && country[i]<='Z')
        {
            country[i]='a'+country[i]-'A';
        }
    }
    printf("%s\n", country);
    return 0;
}