#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 4, b = 3;
    swap(&a, &b);
    printf("%d %d", a, b);

    return 0;
}