#include <stdio.h>

int main()
{
    int ara[5]={50, 60, 70, 80, 90};

    printf("Value of array : %d %d %d %d %d\n", ara[0], ara[1], ara[2], ara[3], ara[4]);
    printf("Adress of array is: %p\n", ara);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
    printf("Adress of array is: %p\n", &ara[0]);
    printf("Adress of array is: %p\n", &ara[1]);
    printf("Adress of array is: %p\n", &ara[2]);
    printf("Adress of array is: %p\n", &ara[3]);
    printf("Adress of array is: %p\n", &ara[4]);

    return 0;
}