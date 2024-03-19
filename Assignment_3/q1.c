/* Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******
*/


#include<stdio.h>
int main()
{ 
 int number;
 char character;

 printf("enter the character=");
 scanf("%c",&character);


 printf("enter the number=");
 scanf("%d",&number);
   
  int i;
  while(i<number)
  {     
  printf("%c",character);
  i++;
  }




return 0;
}
