//celsius to farenheit
#include <stdio.h>
int main()
{
    double celsius, farenheit;
    printf(" Enter the value of celcius scale=");
    scanf(" %lf", &celsius);
    farenheit = 1.8*celsius+32;
    printf(" The value of farenheit scale is=%lf", farenheit);
    return 0;
}