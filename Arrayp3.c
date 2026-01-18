#include<stdio.h>                  // serch element in array
void main()
{

	int a[10],i,n,key,found=0,size;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter values of arry");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter number to serch");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
	if(a[i]==key)
	{
	printf("number is found at %d position\n",i+1);
	found=1;
	break;
	}
	}
	 if(found==0)
	{
		printf("number not found");
	}
	
}

