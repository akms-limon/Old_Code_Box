#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n; 
    printf("enter the student number : ");
    scanf("%d", &n);

    int *marks;
    marks = (int *) malloc(sizeof(int)*n);

    printf("enter your numbers : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("your entered number is : ");
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ", marks[i]);
    }

    free(marks);
    
    return 0;
}