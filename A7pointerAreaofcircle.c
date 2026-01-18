#include<stdio.h>
void Area(float* r);
void main()
{
	float r;
	printf("enter r");
	scanf("%f",&r);
	Area(&r);
}
void Area(float* r)
{
	float Area;
	Area=3.14*(*r)*(*r);
	printf("Area=%f",Area);
}