//Write a program to accept three integer numbers and find its average.

#include<stdio.h>
int main()

{
 int n1,n2,n3;
 float avg;

 printf("enter the number");
 scanf("%d %d %d",&n1,&n2,&n3);

 avg= (float)(n1+n2+n3)/3;

 printf("The average of %d %d %d =%.2f\n",n1,n2,n3,avg);
 

 return 0;
 }


