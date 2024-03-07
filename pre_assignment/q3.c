// Write a program to calculate Fibonacci Series up to n numbers

#include <stdio.h>

void fibonacciSeries(int n) {
    int first = 0, second = 1, next, i;
    
    printf("Fibonacci series up to %d numbers:\n", n);
    printf("%d, %d", first, second);
    
    for (i = 2; i < n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to generate::: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fibonacciSeries(n);
    }

    return 0;
}
