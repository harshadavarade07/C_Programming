#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("After swap: a=%d b=%d\n",a,b);
}
void swap(int* x,int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	
}