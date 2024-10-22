#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, except for 'q' and 'e',
 *              followed by a new line. Uses only putchar function twice.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
char letter;

for (letter = 97; letter <= 122; letter++)
{
if (letter != 101 && letter != 113)
{
putchar(letter);
}
}
putchar('\n');

return (0);
}
