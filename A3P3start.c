#include<stdio.h>
void main()
{
int start,end,sum=0;
printf("enter start and end");
scanf("%d %d",&start,&end);

while(start<=end)
      {
	  sum=sum+start;
       start++;
    
      printf("sum=%d",sum);
  }
      if(start>=end)
      printf("plz enter correct incremental values");
  
}