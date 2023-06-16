#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char binary[65];
    scanf("%s", binary);
    int len, power;
    len = strlen(binary);
    int i;
    int decimal=0;
    power=len -1;
    for (i = 0; i < len; i++)
    {
        decimal+=(binary[i]-'0')*pow(2, power );
        power--;
    }
    printf("Decimal number is : %d", decimal);
    return 0;
}