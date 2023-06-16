#include<stdio.h>
int main()
{
    int a[10][10];
    int i, j;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j]=(i+1)*(j+1);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d + %d = %d\n", (i+1), (j+1), a[i][j]);
        }
        printf("\n");
    }
    return 0;
}