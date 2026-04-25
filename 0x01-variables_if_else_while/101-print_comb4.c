#include <stdio.h>
#include <stdlib.h>

/**
* Author: Olawale Ibrahim
* Program: WinMingle Community C Training
* Description: Print all possible different combinations of three digits.
*/


int main(void)
{
    int hundreds;
    int tens;
    int ones;
    int num;
    
    for (num = 0; num < 1000; num++)
    {
        hundreds = num / 100;
        tens = (num / 10) % 10;
        ones = num % 10;

        if (hundreds < tens && tens < ones)
        {
            putchar(hundreds + '0');
            putchar(tens + '0');
            putchar(ones + '0');

            if (num < 700)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');

    return 0;
}
