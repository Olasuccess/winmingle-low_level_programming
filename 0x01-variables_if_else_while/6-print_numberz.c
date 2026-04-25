#include <stdio.h>
#include <stdlib.h>

/**
* Author: Olawale Ibrahim
* Program: WinMingle Community C Training
* Description: Same as Task 5, but:
* Do not use char variables.
* Use only putchar (twice).
*/


int main(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        putchar((num % 10) + '0');
    }

    putchar('\n');

    return 0;
}
