#include<stdio.h>
void main()
{
	
	int n,r,s=0;
	printf("enter number");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		s=r+s;
		n=n/10;
	}
	
	printf("sum of all digits=%d",s);
}