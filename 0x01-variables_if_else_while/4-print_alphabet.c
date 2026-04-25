#include <stdio.h>

/**
 * Author: Olawale Ibrahim
 * Program: WinMingle Community C Training
 * Description: Print the alphabet in lowercase except letters q and e, followed by a new line
 */


int main(void)
{
    int letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    if (letter != 'e' && letter != 'q')
    {
        putchar(letter);
    }
    putchar('\n');

    return 0;
}
