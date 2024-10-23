#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line, using while loops and
 *              only putchar three times.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char n = 48;

char l = 97;

while (n <= 57)
{
putchar(n);
n++;
}

while (l <= 102)
{
putchar(l);
l++;
}

putchar('\n');

return (0);
}
