#include<stdio.h>
#include<string.h>

struct nametype
{
	char first[20];
	char second[20];
};

struct student
{
	int id;
	struct nametype name;
};

main()
{
	struct student one;
	scanf("%d", &one.id);
	scanf("%s", one.name.first);
	scanf("%s", one.name.second);

	printf("ID: %d\n", one.id);
	printf("Name : %s %s", one.name.first, one.name.second);

	return 0;
}