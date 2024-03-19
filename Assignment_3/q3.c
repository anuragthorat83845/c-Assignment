/* Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20 */

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10; 
        sum += digit;
        num /= 10; 
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
//. Reverse the number
Input: 9362
Output: 2639


