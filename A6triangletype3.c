#include<stdio.h>
void area(int,int);
void main()
{
	int len,bred;
	printf("enter length and bredth");
	scanf("%d %d",&len,&bred);
	area(len,bred);
	
}
void area(int len,int bred)
{
	int res=len*bred;
	printf("area=%d",res);
}
