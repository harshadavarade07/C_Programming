#include<Stdio.h>
float Area();
int main()
{
	float res;
	res=Area();
	printf("Area=%f",res);
	return 0;
	
}
float Area()
{
	int r;
	float pi=3.14,Area;
	printf("enter r");
	scanf("%d",&r);
	Area=pi*r*r;
	return Area;
}



/*#include<stdio.h>
void Area();
int main()
{
	Area();
}

void Area()
{
	int r;
	float pi=3.14, Area;
	printf("entet r");
	scanf("%d",&r);
	Area=pi*r*r;
	printf("Area=%f",Area);
}*/
	


























