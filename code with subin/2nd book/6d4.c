#include<stdio.h>
#include<string.h>

struct student
	{
		int id;
		char name[20];
	};

int main()
{
	struct student one;
	
	scanf("%d", &one.id);
	scanf("%s", one.name);

	printf("ID : %d\n", one.id);
	printf("Name : %s", one.name);

	return 0;
}