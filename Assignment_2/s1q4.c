//Write a program to find maximum of two numbers using

#include<stdio.h>
int main()

{

int n1,n2;
printf("Enter the number =");
scanf("%d %d",&n1,&n2);


// a. using if-else
if(n1 > n2)
  {
   printf("the number n1=%d is maximum\n",n1);
  }
 else
  printf("the number n2=%d is maximum\n",n2);


//using condion operator
int max;
max=n1 > n2 ? n1: n2;
printf("maximum number is =%d\n",max);

  return 0;
}  
