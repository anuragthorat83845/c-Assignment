/* Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.*/

// using if else


#include<stdio.h>
int main()

{

  int n1,n2,div;
  printf("enter the number=");
  scanf("%d %d",&n1,&n2);

  if(n2!=0)
    {
	  div=n1/n2;
	  printf("the division of %d / %d = %d",n1,n2,div);
    }
  else
  {
    printf("divide by zero not allowed");
  
  }
  return 0;
}
