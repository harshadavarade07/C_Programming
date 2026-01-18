#include<stdio.h>
void main()
{
	int i,n,A=0;
	
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	   if(n%i==0)
	   {
	    A=A+i;
	   }
	   
    }
		
	 if(n==A)
	printf("prime number");
	else 
	printf("not prime number");
	
}