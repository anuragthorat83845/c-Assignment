/*12. Write a program to accept integer values of base and index and calculate power of base to   */

#include <stdio.h>

int main()
{
    int base, index, result = 1;

   
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the index: ");
    scanf("%d", &index);

  
    for (int i = 1; i <= index; i++) {
        result *= base;
    }

   
    printf("%d^%d = %d\n", base, index, result);

    return 0;
}

