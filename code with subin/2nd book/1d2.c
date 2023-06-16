#include <stdio.h>

int main()
{
    char small_letter, capital_letter;
    small_letter= getchar();
    capital_letter = small_letter-32;
    printf("small letter is : %c\ncapital_letter is : %c\n", small_letter, capital_letter);
    return 0;
}