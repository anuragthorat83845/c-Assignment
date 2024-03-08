/*Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.

*/
#include<stdio.h>
int main ()
{
  int num1,num2,sum,diff,prod;

  printf("Enter the number =");
  scanf("%d",&num1);

  printf("Enter the number =");
  scanf("%d",&num2);


  sum = num1+num2;
  printf("Sum of two numbers =%d\n",sum);
  

  diff = num1-num2;
  printf("Differnce of two numbers =%d\n",diff);


  prod  = num1*num2;
  printf("Product of two numbers =%d\n",sum);


 




  return 0;
 }
