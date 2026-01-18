#include<stdio.h>
void main()
{
	int n,r,A=0,b;
	printf("enter number");
	scanf("%d", &n);
	b=n;
	
	while(n>0)
	    {
	    r=n%10;
	    A=(r*r*r)+A;
	    n=n/10;
	}
	
	if(b==A)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("not Armstrong number");
	}
}