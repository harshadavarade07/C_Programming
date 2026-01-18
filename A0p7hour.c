#include<stdio.h>
void main()
{
	int min,hours,rmin;
	printf("Enter min");
	scanf("%d",&min);
	hours=min/60;
	rmin=min%60;
	printf("total min %d\n" " %dhr" " %dmin",min,hours,rmin);
}