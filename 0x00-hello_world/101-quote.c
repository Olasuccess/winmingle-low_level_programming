#include <unistd.h>

/**
* Write a C program that prints exactly:
*  and that piece of art is useful" - Dora Korpar, 2015-10-19
* to the standard error.
* Do not use printf or puts
* Your program should return 1
* Compile without warnings using -Wall
 */
int main(void)
{
    const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* Write to file descriptor 2 (stderr) */
    write(2, msg, 59);

    return (1);
}

