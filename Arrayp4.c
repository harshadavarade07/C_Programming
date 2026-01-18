#include<stdio.h>                               //even and odd among the numbers
void main()
{ 
    int a[10],i,n;
    printf("enter numbers of elements");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("\n even numbers :");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		 printf("%d", a[i]);
	}
		printf("\n odd numbers :");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		printf("%d", a[i]);
	}
}