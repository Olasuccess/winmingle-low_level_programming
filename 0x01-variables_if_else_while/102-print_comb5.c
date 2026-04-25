#include <stdio.h>
#include <stdlib.h>

/**
* Author: Olawale Ibrahim
* Program: WinMingle Community C Training
* Description: Print all possible combinations of two two-digit numbers
*/


int main(void)
{
    int fTens;
    int fOnes;
    int sTens;
    int sOnes;
    int x, y;

    for (x = 0; x <= 99; x++)
    {
        fTens = x / 10;
        fOnes = x % 10;

        for (y = 0; y <= 99; y++)
        {
            sTens = y / 10;
            sOnes = y % 10;

            if (fTens < sTens || (fTens == sTens && fOnes < sOnes))
            {
                putchar(fTens + '0');
                putchar(fOnes + '0');
                putchar(' ');
                putchar(sTens + '0');
                putchar(sOnes + '0');

                    if (!(fTens == 9 && fOnes == 8))
                    {
                        putchar(',');
                        putchar(' ');
                    }
            }
        }
    }
    putchar('\n');

    return 0;
}                 
