#include<stdio.h>
void main()
{
	is_evenodd();
}

is_evenodd()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
		
		if(n%2==0)
		{
			printf("number is even");	
		}
		else
		{
			printf("number is odd");	
		}
}

