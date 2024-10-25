#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 *                      each followed by a new line
 *
 * Description: This function uses a loop to print all lowercase letters
 * of the alphabet 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)

{

int tm;
int alpha=97;

for (tm = 0; tm < 10; tm++)
{
while (alpha < 122)
{
_putchar(alpha);
alpha++;
}
}
_putchar('\n');
}
