/*#include<stdio.h>
void main()
{
	
	char ch;
	printf("Enter a character");
	scanf("%c",&ch);
	if(ch >= 'A' && ch <= 'Z')
	{
	 printf("character is Uppercase");
    }
    else if(ch >= 'a' && ch <= 'z')
    { 
    printf("character is  lowercase");
	}
	
}*/
	






#include<stdio.h>
void Uppercase();                               //decl
                            
void main()
{
	Uppercase();                              //call
                             
}

void Uppercase()                              //defn
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch>='A' &&  ch<='Z')
	{
		printf("character is in Uppercase");
	}
	else if(ch>='a' &&  ch<='z')
	{
		printf("character is in lowercase");
	}
}



	
	
	