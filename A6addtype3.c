#include<stdio.h>
void sum(int,int);
void main()
{
	int no1,no2;
	printf("enter no1 and no2");
	scanf("%d %d",&no1,&no2);
	sum(no1,no2);
	
}
void sum(int x ,int y)
{
	int  res=x+y;
	printf("sum=%d",res);
}