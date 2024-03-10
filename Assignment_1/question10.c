/* . Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.*/

#include<stdio.h>
#include<math.h>

float Area(float a, float b, float c)
{
    
   return sqrt(s * (s - a) * (s - b) * (s - c));

}



int main()

{
 float a,b,c;
 float perimeter;
 
 printf(" Enter the side of triangle= \n");
 scanf("%f %f %f",&a,&b,&c);

 perimeter=(a+b+c*a+b+c);
 printf("perimeter of triangle= %f",perimeter);
/*
 area=sqrt(s * (s - a) * (s - b) * (s - c));
 printf("Area of triangle= %f",area);
 */

 float A =Area(a,b,c);
 printf("Area of triangle =%f",a);
 return 0;

 }
