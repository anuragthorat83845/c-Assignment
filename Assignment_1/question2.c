//Write a program to accept a number and print the number in character,decimal, octal and hex
//formats.

#include<stdio.h>
int main ()
{
   int num;
   printf("enter the number= ");
   scanf("%d",&num);

   printf("number in char =%c\n",num);

   printf("number in octal =%o\n",num);

   printf("number in hex =%x\n",num);

   return 0;

   }
