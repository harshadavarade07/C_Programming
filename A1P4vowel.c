 #include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character");
	scanf("%c", &ch);
	if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'|| ch=='u')
	{
	printf("character is vowel");
	}
	else
	{
	printf ("character is not vowel");
	}
}