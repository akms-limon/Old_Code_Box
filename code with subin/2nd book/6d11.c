#include<stdio.h>

union u
{
    char ch; 
    int x; 
    int y;
};

int main()
{
    union u uv;
    uv.ch='A';

    printf("%c\n", uv.ch);

    uv.x=10;
    printf("%d\n", uv.x);
    printf("%c\n", uv.ch);

    uv.y=20;
    printf("%d\n", uv.y);
    printf("%c\n", uv.ch);

    
    return 0;
}