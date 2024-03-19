/* Write a program to accept a character c and display category of the input character.
ALPHABET: c is a letter (65 to 90 or 97 to 122)
UPPERCASE: c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT: c is a digit (48 to 57)
SPACE: c is a space(32), tab(9), carriage return(13), new line(10)
OTHER: Not listed above */

#include <stdio.h>

int main() {
    char c;

    
    printf("Enter a character: ");
    scanf("%c", &c);

    
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("%c is a letter.\n", c);
        if (c >= 'A' && c <= 'Z') {
            printf("%c is an uppercase letter.\n", c);
        } else {
            printf("%c is a lowercase letter.\n", c);
        }
    } else if (c >= '0' && c <= '9') {
        printf("%c is a digit.\n", c);
    } else if (c == ' ' || c == '\t' || c == '\r' || c == '\n') {
        printf("%c is a space, tab, carriage return, or new line.\n", c);
    } else {
        printf("%c is a special character.\n", c);
    }

    return 0;
}






