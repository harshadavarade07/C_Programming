#include<stdio.h>
void main()
{ 
  int a,n,fact=1,result=0,rem,i;
  
  printf("enter number\n");
  scanf("%d",&n);
  a=n;
  while(a!=0)
  {
   rem=a%10;
    for(i=1;i<=rem;i++)
    {
    	fact=fact*i;
	}
	result=result+fact;
	fact=1;
	a=a/10;
}
	
	if(result==n)
	printf("is strong number");
	
	else
	printf("is not strong number");
}
    

    
  
  
    
   
   
    
    