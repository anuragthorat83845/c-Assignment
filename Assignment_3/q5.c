/*5. Write a program to find factorial of given number.Input: 5
Output: 5 * 4 * 3 * 2 * 1 = 120 */

#include <stdio.h>

int main()
{
    int number, factorial = 1, i;

   
    printf("Enter a number: ");
    scanf("%d", &number);

   
    i = number;
    printf("%d! = ", number);
    while (i >= 1) {
        factorial *= i;
        printf("%d", i);
        if (i != 1)
            printf(" * ");
        i--;
    }

    
    printf(" = %d\n", factorial);

    return 0;
}

