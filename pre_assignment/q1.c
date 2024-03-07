/*
Write a program to input n numbers on command line argument and 
calculate maximum of them
*/

#include <stdio.h>
#include <stdlib.h>

//argv[] is a array of strings which stores cmd line arguments
int main(int argc, char *argv[])
{
    if (argc < 2)// argc is number of cmd line arguments passed 
    {
        printf("Usage: %s \n", argv[0]);
        return 1;
    }

    // here string will be converted to integer. "atoi= asci to integer".
    int max = atoi(argv[1]); // argv[1] is the first argument
    for (int i = 2; i < argc; i++)
    {
        int currentNum = atoi(argv[i]);// Convert the current argument to an integer which is argv[2]
        if (currentNum > max)//argv[2]> argv[1]
        {                    
            max = currentNum; // change the max to current argument
        }
        
    }

    printf("Maximum number is: %d\n", max);

    return 0;
}
