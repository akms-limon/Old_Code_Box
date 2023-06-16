#include<stdio.h>
int main()
{
    int count=5;
    int ara[count][count];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }
    int ara2[count][count];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            ara2[i][j]=ara[j][i];

        }
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("%d ", ara2[i][j]);

        }
        printf("\n");
    }
    return 0;
}