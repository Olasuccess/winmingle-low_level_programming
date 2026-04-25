#include <stdio.h>
#include <stdlib.h>

/**
* Author: Olawale Ibrahim
* Program: WinMingle Community C Training
* Description: Print all possible combinations of single-digit numbers separated by commas and spaces.
*/


int main(void)
{
    int x;

    for (x = 0; x < 10; x++)
    {
        putchar(x + '0');
        if (x != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');

    return 0;
}
