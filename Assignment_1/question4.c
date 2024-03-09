/* Write a program to print following pattern.
a. Using multiple printf statements
b. Using single printf statement
*
**
***
****
*****

*/

#include<stdio.h>
int main()

// a.Using multiple printf statement

{

   printf("*\n");


   printf("**\n");


   printf("***\n");

   printf("****\n");

   printf("*****\n");

   printf("_________________________________________________________________________________________\n");
 
//b. Using single printf statement

   int i,j;
   int row=5;
   for(i=0;i<=row;i++)
   {
	   for(j=0;j<i;j++)
	  {

        printf("*");
	  }
	  printf("\n");
   }

   return 0 ;
}
