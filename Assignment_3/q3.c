/* Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20 */
/*
#include <stdio.h>

int main() 
{
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) 
	{
        digit = num % 10; 
        sum += digit;
        num /= 10; 
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
//b  Reverse the number
Input: 9362
Output: 2639  

#include <stdio.h>

int main() 
{
    int number, reversedNumber = 0;
    
   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    while (number != 0)
	{
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

   
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}*/
// c.Check whether given number is numeric palindrome or not
#include <stdio.h>

int main()
{
    int number, originalNumber, reversedNumber = 0, remainder;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

   
    while (number != 0)
	{
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    
    if (originalNumber == reversedNumber) 
	{
        printf("%d is a numeric palindrome.\n", originalNumber);
    } else {
        printf("%d is not a numeric palindrome.\n", originalNumber);
    }

    return 0;
}

//d.Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
//then the number is called as Armstrong number)
 

