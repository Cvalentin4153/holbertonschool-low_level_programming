#include "main.h"

/**
*times_table - Prints the 9 times table, starting from 0
* Description- This functions prints the 9 times table in a grid format.
*
*/

void times_table(void)
{
int n;
int l;
int mul;
for (n = 0; n <= 9; n++)
{
for (l = 0; l <= 9; l++)
{
mul = n * l;
if (mul < 10)
{
if (l != 0)
_putchar(' ');
_putchar(mul + '0');
}
else
{
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
if (l != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
