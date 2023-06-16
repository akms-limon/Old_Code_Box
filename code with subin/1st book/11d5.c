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
            /* code */
        }
        
        /* code */
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("%d ", ara[i][j]);
            /* code */
        }
        printf("\n");
        /* code */
    }
    for (int j = 0; j < count; j++)
    {
        int n=0;
        for (int i = 0; i < count; i++)
        {
            n=n+ara[i][j];
            /* code */
        }
        printf("summation of col %d is: %d\n", j+1, n);
        /* code */
    }
    
    
    return 0;
}