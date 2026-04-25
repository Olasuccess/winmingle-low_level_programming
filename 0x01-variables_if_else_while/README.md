This is C variable, if_else

WinMingle Community Software Engineering Training Program
Module 2: Variables, If, Else, and While
Instructor: Greenfield Adolphus
 Department: WinMingle Community Software Engineering Program
 Repository: winmingle-low_level_programming
 Directory: 0x01-variables_if_else_while
 Language: C
Objectives
By the end of this module, you will be able to explain — without Google — the following:
General
What are arithmetic operators and how to use them


What are logical (boolean) operators and how to use them


What are relational operators and how to use them


What values are considered TRUE and FALSE in C


How to use the if and if...else statements


How to use comments


How to declare and assign variables (char, int, unsigned int)


How to print variable values using printf


How to use the while loop


How to use variables inside loops


What the ASCII character set is


The purpose of the gcc flags -m32 and -m64



Command Line Help:
 Use:
man ascii

(You don’t need to study scanf, getchar, EOF, for-loops, or functions yet.)

Requirements
General:
Allowed editors: vim, emacs
All files compiled on Ubuntu 20.04 LTS using:

 gcc -Wall -Werror -Wextra -pedantic -std=gnu89


Each file must:


End with a new line


Contain no compilation warnings or errors


Follow WinMingle C Style Guide (similar to Betty)


Have a header comment:

 /**
 * Author: Your Full Name
 * Program: WinMingle Community C Training
 * Description: Brief description of this file
 */

A README.md file must be present in the project root.


You are not allowed to use system().


All code should be within the main function unless otherwise specified.



Academic Integrity
You are expected to solve all tasks independently.
 Copying, plagiarism, or sharing of solutions violates WinMingle’s standards and may result in removal from the program.
 Tasks
0. Positive Anything is Better Than Negative Nothing
Mandatory
Write a program that assigns a random number to the variable n each time it runs and prints whether the number is positive, negative, or zero.
Requirements:
Use the provided base code.


Do not modify the random number generation section.


Output must be:

 <number> is positive
 or

 <number> is zero
 or

 <number> is negative
File: 0-positive_or_negative.c
1. The Last Digit
Mandatory
Write a program that prints the last digit of a random number n.
Output Format:
Last digit of <n> is <last_digit> and is ...
Conditions:
Greater than 5 → “and is greater than 5”


Equals 0 → “and is 0”


Less than 6 and not 0 → “and is less than 6 and not 0”


File: 1-last_digit.c

2. The Alphabet Game
Mandatory
Print the alphabet in lowercase, followed by a new line.
Restrictions:
Use only putchar.


Only two putchar calls allowed.


All code inside main.


File: 2-print_alphabet.c



3. alphABET
Mandatory
Print the alphabet in lowercase, then uppercase, followed by a new line.
Restrictions:
Use only putchar.


Only three putchar calls allowed.


File: 3-print_alphabets.c
4. When I Was Having That Alphabet Soup
Mandatory
Print the alphabet in lowercase except letters q and e, followed by a new line.
Restrictions:
Use only putchar.


Only two putchar calls allowed.


File: 4-print_alphabt.c


5. Numbers
Mandatory
Print all single-digit numbers of base 10 starting from 0.
Output:
0123456789

File: 5-print_numbers.c
6. Numberz
Mandatory
Same as Task 5, but:
Do not use char variables.


Use only putchar (twice).


File: 6-print_numberz.c

7. Smile in the Mirror
Mandatory
Print the lowercase alphabet in reverse order.
Output:
zyxwvutsrqponmlkjihgfedcba

File: 7-print_tebahpla.c


8. Hexadecimal
Mandatory
Print all the numbers of base 16 in lowercase.
Output:
0123456789abcdef

File: 8-print_base16.c

9. Patience, Persistence and Perspiration
Mandatory
Print all possible combinations of single-digit numbers separated by commas and spaces.
Output:
0, 1, 2, 3, 4, 5, 6, 7, 8, 9

File: 9-print_comb.c
10. Inventing is a Combination of Brains and Materials
Advanced
Print all possible different combinations of two digits.
Rules:
Only the smallest combinations printed (no 10 after 01).


Use putchar five times max.


No char variables.


File: 100-print_comb3.c

11. The Success Combination in Business
Advanced
Print all possible different combinations of three digits.
Output example:
012, 013, 014, ..., 789

File: 101-print_comb4.c

12. Software is Eating the World
Advanced
Print all possible combinations of two two-digit numbers.
Rules:
Numbers range from 0–99


Each number printed with two digits


Output example:

 00 01, 00 02, ..., 98 99
File: 102-print_comb5.c

Submission
Push all solution files to your GitHub repository:

 winmingle-low_level_programming
Inside the directory:

 0x01-variables_if_else_while

Include a clear commit message for each file, for example:

 git add 0-positive_or_negative.c
git commit -m "Add program that prints whether number is positive, negative, or zero"
git push 
