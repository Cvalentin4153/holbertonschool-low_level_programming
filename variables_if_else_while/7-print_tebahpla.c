#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 *              followed by a new line using only putchar twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{

char l;

for (l = 122; l >= 97; l--)
{
putchar(l);
}

putchar('\n');

return (0);
}
