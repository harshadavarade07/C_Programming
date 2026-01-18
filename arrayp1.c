#include<Stdio.h>                                max and min element in array
void main()
{
	int a[100],size,i,max,min;
	printf("enter size of array :");
	scanf("%d",&size);
	printf("\nenter array elements");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
		for(i=0;i<size;i++)
	{
	   if(a[i]>max)
	   {
	   	  max=a[i];
	   }
	}
	printf("maximum array elements=%d",max);
	
	min=a[0];
	for(i=0;i<size;i++)
	{
	   if(a[i]<min)
	   {
	   	  min=a[i];
	   }
	}
	printf("\nminimum array elements=%d",min);
	
}

