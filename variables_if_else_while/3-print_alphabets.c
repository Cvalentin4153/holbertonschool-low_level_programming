#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then uppercase,
 *              followed by a new line using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char letter;

for (letter = 97; letter <= 122; letter++)
{
putchar(letter);
}

for (letter = 65; letter <= 90; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
