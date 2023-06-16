#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n,total_class, total_student[12], **marks;
    printf("enter total number of class : ");
    scanf("%d", &total_class);
    marks = (int **) malloc(sizeof(int) * total_class);
    for ( i = 0; i < total_class; i++)
    {
        printf("\nenter the number of student in class %d : ", i+1);
        scanf("%d", &n);
        total_student[i]=n;
        marks[i]=(int *)malloc(sizeof(int) * n);
        for ( j = 0; j < n; j++)
        {
            printf("student %d : ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\noutput : \n");
    for ( i = 0; i < total_class; i++)
    {
        printf("class %d: ", i+1);
        for ( j = 0; j < total_student[i]; j++)
        {
            printf("%d  ", marks[i][j]);
        }
    }
    return 0;
}