#include<stdio.h>

void sum1(int a)
{
	a=a+10;
}

void sum2(int* a)
{
	*a =(*a)+10;
}

int sum(int a)
{
	int sum = a+a;
	return sum;
}
int main()
{
	int a; 
	a=5;
	sum1(a);
	printf("%d\n", a);
	sum2(&a);   
	printf("%d\n", a);
	int b=20;
	int sum1 = sum(a);
	printf("sum = %d", sum1);
	return 0;
}