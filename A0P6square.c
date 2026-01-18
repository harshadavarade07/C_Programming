#include<stdio.h>
void main()
{
	int num;
	printf("enter a num:");
	scanf("%d",&num);
	int square,cube;
	square=num*num;
	cube=num*num*num;
	printf("square of %d is %d\n",num,square);
	printf("cube of %d is %d\n",num,cube);
}