#include<stdio.h>
void main()
{
	int r,r1=0,n,a;
	printf("enter number");
	scanf("%d",&n);
	a=n;
	
	while(n>0)
	{
		r=n%10;
		r1=r+(r1*10);
		n=n/10;
	}
	
	if(a==r1)
	{
		printf("pallendrome number");	
	}
	else
	{
	printf(" not pallendrome number");
	}
	
}