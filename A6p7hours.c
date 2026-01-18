#include<stdio.h>
void convert();

int main()
{
	 convert();
}

void convert()
{
int min,rmin,hours;
 printf("enter minutes");
 scanf("%d",&min);
 hours=min/60;
 rmin=min%60;
 printf("%d=total minutes, %d=hours,%d=rmin",min,hours,rmin);
}