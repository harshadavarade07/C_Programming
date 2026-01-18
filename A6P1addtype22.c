#include<stdio.h>
int sum();
int main()
{
	int res;
	res=sum();
	printf("sum=%d",res);
	return 0;
}
int sum()
{
	int a,b,c;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	c=a+b;
	return c;
	
}

/*#include<stdio.h>
void sum();
void main()
{
	sum();
}

void sum()
{
	int a,b,c;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum=%d",c);
}*/
































































