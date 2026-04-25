#include <stdio.h>

/**
 * Author: Olawale Ibrahim
 * Program: WinMingle Community C Training
 * Description: Print the alphabet in lowercase, followed by a new line.
 */


int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter); /* First call: prints each alphabet character */
    }
    putchar('\n'); /* Second call: prints the final new line */

    return 0;
}

