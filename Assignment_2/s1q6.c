/* Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome). */

#include<stdio.h>
int main()
{
 int num;
 printf("Enter the number=");
 scanf("%d",&num);

 int temp,i,rem,sum=0 ,rev=1;
 temp=num;
  for(i=1;i<=5;i++)
    {
       rem=temp%10;
	   sum=sum+rem;
	   temp=temp/10;
    }
	printf("sum=%d\n",sum);

	return 0;	
}

