#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 *
 * Description: This function prints all lowercase letters of the alphabet
 * using only _putchar twice.
 *
 * Return: void
 */
void print_alphabet(void)

{

int l;

for (l = 97; l <= 122; l++)
{
_putchar(l);
}
_putchar('\n');
}
