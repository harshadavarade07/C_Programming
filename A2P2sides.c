#include<stdio.h>
void main()
{ 
    int a,b,c;
    printf("enter three sides of triangle");
    scanf("%d,%d,%d", &a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
     {
	 if(a==b && b==c)
     printf("Equilateral triangle");
	 
	 else if(a==b||b==c||a==c)
	 
		printf("Isoscles triangle");
	 
	  else
	  
	    printf("scalene triangle");
	  }
}
	  