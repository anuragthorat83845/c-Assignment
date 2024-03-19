/*  Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5  */

#include <stdio.h>

int main()
{
    int number, divisor = 2;

    
    printf("Enter a number: ");
    scanf("%d", &number);


    printf("%d = ", number);
    while (number > 1) 
	{
        if (number % divisor == 0) 
		{
            printf("%d", divisor);
            number /= divisor;
            if (number > 1)
			{
                printf(" * ");
            }
        } else
		{
            divisor++;
        }
    }
    printf("\n");

    return 0;
}

