 /*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.*/

#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year  : ");
	scanf("%d",&year);
//Without using logical operators

	if( year % 400 == 0)
  	printf(" This is a Leap Year %d & number of day is 366 \n",year);

    else if( year %100 == 0 )
	printf(" This is a not  Leap Year %d & number of day is 365 \n",year);

	else if( year % 4 == 0 )
    printf(" This is a Leap Year %d & number of day is 366 \n",year);

	else
    printf(" This is a not Leap Year %d & number of day is 365 \n",year);

   printf("###########################################################\n");
//Using logical operators

	if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0   )
	
  	printf(" This is a Leap Year %d & number of day is 366 \n",year);
	else
	printf(" This is a not  Leap Year %d & number of day is 365 \n",year);

   printf("###########################################################\n");
//Conditional operator

    (year % 4 == 0 && year % 100 != 0)?printf("Leap_year\n")  : (year % 400 == 0)?printf("Leap_year\n") : printf("Non_Leap_year\n");
    return 0;
}
