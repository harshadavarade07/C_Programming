#include<stdio.h>
void main()
{
	int s1=20,s2=45,s3=34,s4=46,s5=29,percentage;
	int tm;
	tm=s1+s2+s3+s4+s5;
	printf("%d", tm);
	percentage=(tm*100)/250;
	printf("percentage=%d\n", percentage);
}