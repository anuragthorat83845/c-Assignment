/* Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3 */

#include <stdio.h>

int main() 
{
    int number1, number2, remainder;

    
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);

    
    while (number2 != 0) 
	{
        remainder = number1 % number2;
        printf("%d %% %d = %d\n", number1, number2, remainder);
        number1 = number2;
        number2 = remainder;
    }

 
    printf("GCD of %d and %d is %d\n", number1, number2, number1);

    return 0;
}

