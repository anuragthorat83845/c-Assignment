//Write a program to accept an integer value and print its table.

#include<stdio.h>

int main()

{
  int num,i=1;
  printf("enter the integer=");
  scanf("%d",&num);

 printf("table of %d:\n",num);

 for(i;i<=10 ;i++)
  {
    printf("%d X %d = %d\n",num,i,num*i);
  }

  return 0;
}
