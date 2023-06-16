#include<stdio.h>
int main()
{
    int marks, i, count;
    int total_numbers[]={80,85,80,89,85,80,85,90,98,90};

    for(marks=80; marks<=100; marks++)
    {
        count=0;
        for(i=0; i<10; i++)
        {
            if(total_numbers[i]==marks)
            {
                count++;
            }
        }
        if(count==0)
        {
            continue;
        }
        printf("marks:%d\t members:%d\n", marks, count);
    }
    return 0;
}
