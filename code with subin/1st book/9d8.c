#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    gets(s);
    int start=0;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            if(start==0)
            {
                start=1;
                char ch=s[i]-'a'+'A';
                printf("%c", ch);
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        else if(s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9')
        {
            if(start==0)
            {
                start=1;
                printf("%c", s[i]);
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        else if(s[i]==' ')
        {
            start=0;
            printf("\n");
        }
        else
        {
            start=0;
            continue;
        }
    }
    return 0;
}