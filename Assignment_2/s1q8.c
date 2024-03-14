/* Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50. */


#include<stdio.h>
int main()
{  
int  quantity;
float original_price=5;
float sp_price,discont,price;

printf("enter the quantity =");
scanf("%d",&quantity);

if(quantity>=30 && quantity<=50)
  {
     printf("your quantity is over the 30 quantity therefore you got' 10 percent discount\n");

   
        discont=0.05;
         sp_price = original_price - discont;
   
         price= quantity*sp_price;
    
  }
else
 printf("invalid quantity\n");
   










return 0;
}

