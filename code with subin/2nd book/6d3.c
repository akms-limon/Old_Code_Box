#include <stdio.h>
#include<string.h>

int main()
{
    struct student
    {
        int id;
        char name[40];
        char father[40];
    };

    struct student one;

    one.id =1;
    strcpy(one.name, "Akms Limon");
    strcpy(one.father, "Nur Mohammad");
    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);
    printf("Fathers name: %s\n", one.father);
    
    struct student two;
    two.id=2;
    strcpy(two.name, "Rahim");
    strcpy(two.father, "Limon");
    printf("ID: %d\n", two.id);
    printf("Name: %s\n", two.name);
    printf("Fathers name: %s\n", two.father);
    
    return 0;
}