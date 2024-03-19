//Write a program to find factorial of given number.
//Input: 5
//Output: 1 * 2 * 3 * 4 * 5 = 120

#include <stdio.h>

int main()
{
    int number, factorial = 1, i = 1;

  
    printf("Enter a number: ");
    scanf("%d", &number);

  
    while (i <= number) 
	{
        factorial *= i;
        i++;
    }

    
    printf("Factorial of %d = %d\n", number, factorial);

    return 0;
}

