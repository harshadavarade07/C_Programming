#include<stdio.h>
void main()
{ 
  int n,r,r1=0,b;
  printf(" enter a num");
  scanf("%d",&n);
  (b=n);
  
  while(n>0)
  {
  r=n%10;
  r1=r+(r1*10);
  n=n/10;
  }
  if(b==r1)
  printf("palendrome num");
  else
  printf("Not palendrome num");
  
  
}


























