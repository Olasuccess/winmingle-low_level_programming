#include <stdio.h>
#include <stdlib.h>

/**
 * Author: Olawale Ibrahim
 * Program: WinMingle Community C Training
 * Description: Print the lowercase alphabet in reverse order
 */

int main(void)
{
    char letter;

    for (letter = 'z'; letter >= 'a'; --letter)
    {
        putchar(letter);
    }

    putchar('\n');

    return 0;
}
