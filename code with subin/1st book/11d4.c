#include <stdio.h>
#include<string.h>

int main()
{
    char saarc[7][100]={"bangladesh", "india", "pakistan", "srilanka", "nepal", "bhutan", "maldives"};
    for (int i = 0; i < 7; i++)
    {
        int n=strlen(saarc[i]);
        for (int j = 0; j < n; j++)
        {
            printf("%c", saarc[i][j]);
        }
        printf("\n");
    }
    return 0;
}