#include<stdio.h>
void swap() 
{
	swap(); 
}

void main()
{
	int a,b;
	printf("enter two number");
	scanf("%d",&a,&b);
	a=a+b;
	a=a-b;
	b=a-b;
	printf("after swap: a=%d" "b=%d",a,b);
}
	