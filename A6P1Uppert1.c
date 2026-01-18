#include<Stdio.h>
void Uppercase();
void main()
{
	Uppercase();
}

void Uppercase()
{
	char ch;
	printf("enter character");
	scanf("%d",&ch);
	if(ch>='A' &&  ch<='Z')
	{
		printf("chacater is in Uppercase");
	}
   if else (ch>='a' &&  ch<='z')
   {
   	printf("charcter is in lowercase");
   }
	
	
}