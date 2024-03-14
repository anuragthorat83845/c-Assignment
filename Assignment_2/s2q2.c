//Write a program to crate four function calculator. Four functions are +, - , *, /

#include<stdio.h>

int main ()

{
  float n1,n2, ans;
  char op;
here:
      printf("enter number= ");
      scanf("%f",&n1);


     printf("enter operter= ");
     scanf("%*c%c",&op);

     printf("enter number= ");
     scanf("%f",&n2);

     switch(op)

     {

        case '+' : ans= n1+n2;
                printf("ans : %.2f\n",ans);
				break;



        case '-' : ans= n1 - n2;
                printf("ans : %.2f\n",ans);
				break;



       case '*' : ans= n1*n2;
                printf("ans : %.2f\n",ans);
				break;



       case '/' :if(n2 !=0)
	             {
				  ans=n1/n2;
                  printf("ans : %.2f\n",ans);
				 }
               else
			      printf("can't div by 0\n");
				break;

    	defalut : printf("invalid operator\n");
      }

       char ch;
       printf(" do you want continue= yes/no\n");
       scanf("%*c%c",&ch);

       if(ch =='y' || ch =='Y')
        goto here;


     return 0;
}
