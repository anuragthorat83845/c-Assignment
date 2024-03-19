/* Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50. */


#include<stdio.h>
int main()
{
  const float unit_price= 5.0;
  const float discount_30= 0.10;
  const float discount_50= 0.15;
  
  int quantity;
  float price;
  printf("enter the quantity:");
  scanf("%d",&quantity);

  if(quantity<=0)
 { 
    printf("invalid quantity..!");
	return 1;
 }
if(quantity>50)
 price= quantity * unit_price * (1-discount_50);


if(quantity>30)
 price= quantity * unit_price * (1-discount_30);

else
price= quantity * unit_price;

printf("Price for %d item :RS%.2f\n",quantity,price);
return 0;
}

