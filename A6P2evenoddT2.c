#include<stdio.h>
int evenodd();
int main()
{
	int res;
	res=evenodd();
	if (res==1)
	printf("num is even");
	else
	printf("num is odd");
	
}

int evenodd()
{
	int num;
	printf("enter num");
	scanf("%d",&num);
	if(num%2==0)
	  return 1;
	else
	  return 0;  
}