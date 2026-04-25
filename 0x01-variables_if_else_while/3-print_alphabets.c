#include <stdio.h>

/**
 * Author: Olawale Ibrahim
 * Program: WinMingle Community C Training
 * Description: Print the alphabet in lowercase, then uppercase, followed by a new line
 */


int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);

    putchar('\n');

    for (ch = 'A'; ch <= 'Z'; ch++)
        putchar(ch);

    putchar('\n');
    return 0;

}
