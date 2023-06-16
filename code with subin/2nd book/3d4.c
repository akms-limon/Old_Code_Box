#include <stdio.h>

int main()
{
    FILE *fp_in;
    FILE *fp_out;

    fp_in = fopen("in.txt", "r");
    fp_out = fopen("out.txt", "w");

    int num1, num2, sum;
    fscanf(fp_in,"%d", &num1);
    fscanf(fp_in, "%d", &num2);

    sum=num1+num2;
    
    fprintf(fp_out, "Sum is :%d", sum);

    fclose(fp_in);
    fclose(fp_out);
    
    return 0;
}