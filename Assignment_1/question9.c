/*Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
conversion is
*/

#include<stdio.h>
int main()

{

  int oc,of;

  printf("enter temp in (F) :");
  scanf("%d",&of);
  printf("C= %d°C\n",(of-32)*5/9);


  printf("enter temprature in (C): ");
  scanf("%d",&oc);

  printf("F= %d°F",(oc * 9/5) +32);

  return 0;

}
