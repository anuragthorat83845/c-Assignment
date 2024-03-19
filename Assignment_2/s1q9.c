//Write a program to display number of days in the given month and year using
// a. Using If else ladder.

#include<stdio.h>

enum Month {
JAN=1,FEB,MAR,APR,MAY,JUN,JULY,AUG,SEP,OCT,NOV,DEC
};
int main()
{
 enum Month month;
 int year,days;

printf("enter the number of month (1to12) :");
scanf("%d",&month);

printf("enter the year :");
scanf("%d",&year);


if(month <1 || month >12)
  {
     printf("invalid month");
     return 1;
  }	 

if(month==FEB)
{
   if((year%4==0&& year%100 !=0) ||(year%400==0))
    	days=29;
  	else
  		days=28;
}
else if( month==APR || month==JUN || month==SEP || month==NOV ) 
  		 days=30;
 else
	   days=31;
  

printf("number of days in %d month %dyear %ddays\n",month,year,days);

}
