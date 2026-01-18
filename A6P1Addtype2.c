#include<stdio.h>
void sum();

int main()
{
	sum();
	return 0;
}
void sum()
{
 int a,b,c;
 printf("enter a,b :");
 scanf("%d %d", &a,&b);
 c=a+b;
 printf("sum=%d",c);

}
 