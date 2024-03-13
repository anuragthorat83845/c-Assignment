//Write a program to find maximum of two numbers using

#include<stdio.h>
int main()
{

  int n1,n2,n3;
  printf("Enter the number=");
  scanf("%d %d %d",&n1,&n2,&n3);

// using if else
 if(n1 > n2)
  {
   if(n1 > n3)
     {
       printf("The number n1 = %d is greater\n",n1);
     }
	else
	   printf("The number n3 = %d is greater\n",n3);
   }
  else
    {
       if(n2 > n3)
        { 
           printf("The number n2 = %d is greater\n",n2);
        }
		else
        printf("The number n3 = %d is greater\n",n3);
     }
// using conditional operator
int max;
max= ((n1 > n2)?(n1 > n3)?n1:n3:(n2 > n3)?n2:n3);
printf("maximum number is %d",max);


	 return 0;
}	 
