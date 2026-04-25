#include <stdio.h>

/**
 * Author: Olawale Ibrahim
 * Program: WinMingle Community C Training
 * Description: Print all the numbers of base 16 in lowercase
 */


int main(void)
{
    char character;
    int num;

    for (num = 0; num <= 9; num++)
        putchar(num + '0');
    
    for (character = 'a'; character <= 'f'; character++)
    {
        putchar(character);
    }

    putchar('\n');
    return 0;
}
