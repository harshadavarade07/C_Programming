#include<stdio.h>
void main()
{
float price, discount=0, final_price;
printf("enter a total price:");
scanf("%f", &price);
char student;
printf("are u a student (y/n)");
scanf("%c", &student);
if (student == 'y'|| student == 'Y')
{
	if(price>500)
	    discount=price*0.20;
	else
	    discount=price*0.10;
}
else   
{
	if(price>600)
	   discount=price*0.15;
	else
	discount=0;
}
final_price=price-discount;
 printf("Discount= %.2f\n", discount);
 printf("final price=%2.f", final_price);
}