#include<stdio.h>
int main()
{
    double fs_marks[15]={83,50,62,52,82,72,72,85,86,92,45,82,95,75,62};
    double ss_marks[15]={83,53,63,53,82,73,73,85,83,92,45,83,95,73,63};
    double final_marks[15]={83,83,68,58,82,78,83,85,83,92,48,83,95,78,83};
    double total_marks[15];
    int i;
    for(i=0; i<15; i++)
    {
        total_marks[i]=fs_marks[i]/4+ss_marks[i]/4+final_marks[i]/2;
    }
    for(i=1; i<=15; i++)
    {
        printf("Roll no:%d \n total marks:%.2lf\n\n", i, total_marks[i-1]);
    }
    return 0;
}