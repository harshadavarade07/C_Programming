#include<stdio.h>
void area (float r);
void main()
{
	float radius;
	printf("enter radius");
	scanf("%f",&radius);
	area(radius);
	
}
void area(float r)
{
	int res=3.14*r*r;
	Printf("Area of circle=%f",res);
}