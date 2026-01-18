#include<Stdio.h>

void percentage(float p)
{
	printf("percentage=%2f",p);
}

int  main()
{
 int s1=20,s2=25,s3=28,s4=22,s5=27;
  int tm=s1+s2+s3+s4+s5;
  float per=(tm*100.0)/250;
  percentage(per);
}