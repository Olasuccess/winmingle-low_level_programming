#include <stdlib.h>
#include <time.h>
#include <stdio.h>

 /**
 * Author: Olawale Ibrahim
 * Program: WinMingle Community C Training
 * Description: Write a program that assigns a random number to the variable n each time it runs and prints whether the number is positive, negative, or zero

* Always return 0
 */


int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* START OF CODE  */
    if (n > 0)
            printf("%d is positive\n", n);
    else if (n == 0)
            printf("%d is zero\n", n);
    else
            printf("%d is negative\n", n);

    return 0;
}
