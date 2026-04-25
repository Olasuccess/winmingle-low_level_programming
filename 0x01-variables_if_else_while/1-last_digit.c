#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Author: Olawale Ibrahim
 * Program: WinMingle Community C Training
 * Description: Write a program that prints the last digit of a random number n.
 */


int main(void)
{
    int n;
    int last_digit;

    /* Seed the random number generator based on current time */
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Get the last digit of the random number */
    last_digit = n % 10;

    /* Print the last digit and evaluate conditions */
    printf("Last digit of %d is %d ", n, last_digit);

    if (last_digit > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (last_digit == 0)
    {
        printf("and is 0\n");
    }
    else if (last_digit < 6 && last_digit != 0)
    {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
