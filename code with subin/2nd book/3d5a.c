#include <stdio.h>

int main()
{
    FILE *fp_bangla;
    FILE *fp_math;
    FILE *fp_out;

    fp_bangla = fopen("bangla.txt", "r");
    fp_math = fopen("math.txt", "r");
    fp_out = fopen("out.txt", "w");

    int n=10;

    int bangla[10];
    int math[10];
    int sum[10];

    for (int i = 0; i < n; i++)
    {
        fscanf(fp_bangla, "%d", &bangla[i]);
        fscanf(fp_math, "%d", &math[i]);
        sum[i]=(bangla[i]+math[i])/2;
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(fp_out,"Student id : %d  average number: %d\n", i+1, sum[i]);
    }
    
    return 0;
}