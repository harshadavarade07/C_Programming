#include<stdio.h>                              //sum of array elements
void main()
{
	int a[10],n,sum=0;
	printf("enter size of array elements");
	scanf("%d",&n);
	printf("enter values in array elemnts");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("sum of array elements :");
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d",sum);

}
