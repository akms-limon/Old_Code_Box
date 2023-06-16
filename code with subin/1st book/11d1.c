#include<stdio.h>
int main()
{
    int marks[4][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < 10; i++)
    {
        marks[3][i]=marks[0][i]/4+marks[1][i]/4+marks[2][i]/2;
        printf("Roll : %d\n marks : %d\n\n", i+1, marks[3][i]);
    }
    return 0;
}