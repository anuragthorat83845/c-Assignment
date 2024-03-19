/* Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24 */
#include <stdio.h>

int main() 
{
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    printf("Unique pairs of numbers whose multiplication equals %d:\n", number);
    int first = 1;
    while (first <= number) 
	{
        if (number % first == 0)
		{
            int second = number / first;
            if (first <= second)
			{
                printf("%d * %d = %d\n", first, second, number);
            }
        }
        first++;
    }

    return 0;
}

