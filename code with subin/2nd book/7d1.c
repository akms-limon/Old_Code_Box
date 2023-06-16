#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *marks;
    int n; 
    printf("enter your student number : ");
    scanf("%d", &n);
    marks = (int *) malloc (sizeof(int)*n);
    printf("please enter the number of students : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    printf("numbers of the students is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }
    return 0;
}