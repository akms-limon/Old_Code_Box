#include<stdio.h>
int main()
{
    int total_marks[]={82,83,84,85,82,84,84,86,90,90};
    int i,count[101];
    for(i=0; i<=100; i++)
    {
        count[i]=0;
    }
    for(i=0; i<10; i++)
    {
        count[total_marks[i]]++;
    }
    for(i=80; i<=100; i++)
    {
        if(count[i]!=0)
        {
        printf("marks: %d\t count: %d \n", i, count[i]);
        }
        else
        {
            continue;
        }
    }
    return 0;
}