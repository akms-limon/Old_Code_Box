#include<stdio.h>
int main(){

    struct student
    {
        int id;
        char name[20];
    };

    struct student one;

    one.id=1;
    one.name="akms limon";  //we can not assign in character type array.

    printf("ID: %d\n", one.id);
    printf("Name : %s", one.name);

    return 0;
}