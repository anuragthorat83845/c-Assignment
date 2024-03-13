/* Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome). */

#include<stdio.h>
int main()
{
int num,temp,a,b,c,d;
 printf("Enter the number=");
 scanf("%d",&num);

if(num <10000 || num > 99999)
  {
  printf("invalid input please enter 5 digit number\n");
  return 1;

   }
      temp=num;
	  a=temp/10000;
	  temp%=10000;

	  b=temp/1000;
	  temp%=1000;

	  temp%=100;
	  c=temp/10;

	  temp%=10;
	  d=temp;

  if(a==d && b==c)
  {
   printf("%d is palindrome\n",num);
  } 
else
    printf("%d is a not palindrome\n",num);


	return 0;	
}

