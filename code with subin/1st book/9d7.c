#include<stdio.h>
int main()
{
    char s1[]="Bangla", s2[]="desh", s3[12];
    int i, j, l1=6, l2=4;
    for(i=0, j=0; i<l1, j<l1; i++, j++)
    {
        s3[j]=s1[i];
    }
    for(i=0; i<l2; i++, j++)
    {
        s3[j] = s2[i];
    }
    s3[j]='\0';
    printf("%s", s3);
    return 0;
} 