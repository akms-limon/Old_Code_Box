#include<stdio.h>

int main()
{
    char c='A';
    char *p;
    
    p=&c;

    printf("the address of c is : %p\n", p);   //p = addres of c. (address which variable we point in the pointer.)
    printf("the address of p is : %p\n", &p);  //&p = address of that pointer 
    return 0;
}