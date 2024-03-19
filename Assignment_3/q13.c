//Write a program to display n terms of Fibonacci series
//Input: 6
//Output: 1, 1, 2, 3, 5, 8
#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;

   
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) 
	{
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

