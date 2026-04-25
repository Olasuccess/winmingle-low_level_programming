#include <stdio.h>

/**
 * Author: Olawale Ibrahim
 * Program: WinMingle Community C Training
 * Description: Print all single-digit numbers of base 10 starting from 0.
 */

int main(void)
{
    int num;

    for (num = 0; num < 10; num++)
    {
          //printf("%d\n", num);
          putchar((num % 10) + '0');
    }
    putchar('\n');
    
    return 0;
}
