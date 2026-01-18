#include<stdio.h>
void is_pallendrome();

int main()
{
	is_pallendrome();
}

void is_pallendrome()
{
	int n,r,r1=0,a;
	printf("enter a number");
	scanf("%d",&n);
	n=a;
	
     while(n>0)
     {
	 r=n%10;
     r1=r+(r1*10);
     n=n/10;
    }
     
     if(a==r1)
     printf("pallendrome number");
	 else
	 printf("not pallendrome number");
	 
     
     
	
}
