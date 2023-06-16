#include <stdio.h>

int main()
{
    FILE *fp_in;
    FILE *fp_out;

    fp_in = fopen("in.txt", "r");
    fp_out = fopen("out.txt", "w");

    char line[80];
    fgets(line, 80, fp_in);

    int num1, num2;
    sscanf(line, "%d %d", &num1, &num2);
    int sum=num1+num2;

    fprintf(fp_out, "%d\n", sum);

    return 0;
}