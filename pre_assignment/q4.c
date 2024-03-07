 /*
 Write a program to calculate the grade of a student. There are five subjects. Marks in each subject are entered from keyboard.
Assign grade based on the following rule:
*/

#include <stdio.h>
int main()
{
    int marks[5];
    int total = 0, i;
    float average;
    
    // Input marks for each subject
    printf("Enter marks for five subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    
    average = total / 5.0;
    
    //  grade based on average marks
    printf("Average marks: %.2f\n", average);
    if (average >= 90) 
    {
        printf("Grade: Ex\n");
    } 
    else if (average >= 80) 
    {
        printf("Grade: A\n");
    } 
    else if (average >= 70)
     {
        printf("Grade: B\n");
    } 
    else if (average >= 60) 
    {
        printf("Grade: C\n");
    } 
    else if(60>average)
    {
        printf("Grade: F\n");
    }

    return 0;
}
