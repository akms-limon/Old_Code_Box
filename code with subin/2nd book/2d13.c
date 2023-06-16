#include <stdio.h>

int main()
{
    char s[]="bangladesh";
    char *p;  //char typer pointer diyeo amra string er kaj korte pari.
    p=s;   //& use kora hoy nai karon string and array nijei akta address.
    printf("the name of our country is : %s\n", p);
    return 0;
}