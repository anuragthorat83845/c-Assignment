/*Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables 
Example:
If input given is
Employee Id       : 101
Dept No           : 30
Designation Code  : M
Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager".*/

#include<stdio.h>
int main()
{
int empid,deptNo;
	char dc;
	printf("Enter the Employee ID  : ");
	scanf("%d",&empid);
	printf("Enter Dept No          : " );
	scanf("%d",&deptNo);
	printf("Enter Desig. Code      : ");
	getchar();
	dc = getchar();

	switch(deptNo)
	{
		case 10 :printf("Employee With Employee ID : %d Is Working In a Marketing Department ",empid);
			     break;
	
		case 20 :printf("Employee With Employee ID : %d Is Working In a Management Department ",empid);
			     break;

		case 30 :printf("Employee With Employee ID : %d Is Working In a Sales Department ",empid);
			     break;
	
		case 40 :printf("Employee With Employee ID : %d Is Working In a Desighning Department ",empid);
			     break;
	}
	switch(dc)
	{
		case 'M' :printf("as Manager \n");
				  break;

		case 'S' :printf("as Supervisor \n");
				  break;

		case 's' :printf("as Security Officer \n");
				  break;
				  
		case 'C' :printf("as Clerk \n");
				  break;
	}

return 0;
}
