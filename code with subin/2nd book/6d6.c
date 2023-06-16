#include<stdio.h>
#include<string.h>

struct nametype
{
	char first[20];
	char second[20];
};

struct studenttype
{
	int id; 
	struct nametype name;
};

int main()
{
	struct studenttype student[5];
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter the id for student %d : ", i+1);
		scanf("%d", &student[i].id);
		printf("Enter the first name of student %d : ", i+1);
		scanf("%s", student[i].name.first);
		printf("Enter the second name of student %d : ", i+1);
		scanf("%s", student[i].name.second);
	}

	printf("\n\n\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("Id: %d\n", student[i+1].id);
		printf("Name : %s %s\n", student[i].name.first, student[i].name.second);
	}
	return 0;
}
