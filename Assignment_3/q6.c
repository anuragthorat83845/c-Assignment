/*Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12 */

#include <stdio.h>

int main() 
{
    int number, divisor = 1;

 
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("All factors of %d (including the number itself): ", number);
    while (divisor < number) {
        if (number % divisor == 0)
    	{
            printf("%d, ", divisor);
        }
        divisor++;
    }
    printf("\n");

    return 0;
}

