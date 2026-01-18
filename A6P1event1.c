#include<stdio.h>
void evenodd();
void main()
{
	evenodd();
}
void evenodd()
{
	int num;
	printf("enter num");
	scanf("%d",&num);
	if (num%2==0)
	{
		printf("num ids even");
	}
	else
	{
		printf("num is odd");
	}
}