/* Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9 3 6 1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639

*/

#include<stdio.h>
int main()

{
  int num,a,b,c,d,e,p,q,r,s;

  printf("enter the 4 digit number=");
  scanf("%d",&num);

  a=num;

  b=a/1000;
  p=b*1000;
  a=a%1000;


  c=a/100;
  q=c*100;
  a=a%100;


  d=a/10;
  r=d*10;
  a=a%10;

  e=a;
  s=e*1;

  printf("face value of %d %d %d %d\n",b,c,d,e);

  printf("place  value of %d %d %d %d\n",p,q,r,s);

  printf("reverse number is %d %d %d %d\n",e,d,c,b);

    


  return 0;
}
