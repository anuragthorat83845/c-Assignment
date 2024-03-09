//Print the ASCII value of user entered character in decimal, hex, octal format and also print the
//character for user entered ASCII value.


#include<stdio.h>
int main()

{
  int num;

  printf("enter the number=");
  scanf("%d",&num);

  if((num>=65 && num<=90 ) || (num >=97 && num<=122))
  {
   printf("%d is %c in character \n",num,num);
  }
  else
  {
   printf("invalid number ");

  }

   printf("%c is %d in decimal \n",num,num);
   printf("%d is %o in octal\n",num,num);
   printf("%d is %x in hexaecimal \n",num,num);

   return 0;
}
