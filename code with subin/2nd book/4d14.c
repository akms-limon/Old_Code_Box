#include<stdio.h>

int fibo[50];
int fibonacci(int n)
{
	if(fibo[n]!=0)
	{
		return fibo[n];
	}
	if(n==1 || n==2)
	{
		return fibo[n];
	}
	fibo[n] = fibonacci(n-1) + fibonacci(n-2);
	return fibo[n];
}

int main()
{
	int n; 
	scanf("%d", &n);
	fibo[1]=1;
	fibo[2]=1;
	printf("fibonacci is : %d\n", fibonacci(n));

	for (int i = 0; i <= 12; ++i)
	{
		printf("%d : %d\n", i, fibo[i]);
	}
	return 0;
}