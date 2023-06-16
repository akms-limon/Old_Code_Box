#include<stdio.h>
#include<stdlib.h>

int main()                                   
{
    int *marks[5], stu_num[5];
    int i, j, n;

    for ( i = 0; i < 5; i++)
    {
        printf("enter the number of student of class %d : ", i+1);
        scanf("%d", &n);
        stu_num[i]=n;
        marks[i] = (int *) malloc(sizeof(int)*n);
        printf("enter the marks of class %d :\n", i+1);
        for ( j = 0; j < stu_num[i]; j++)
        {
            printf("student %d : ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("Output : \n");
    for ( i = 0; i < 5; i++)
    {
        printf("Marks for class %d :\n", i+1);
        for ( j = 0; j < stu_num[i]; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}