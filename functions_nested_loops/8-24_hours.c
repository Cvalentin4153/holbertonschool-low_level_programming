#include "main.h"
/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 *
*/
void jack_bauer(void)

{

int h;
int hh;
int m;
int mm;

for (h = 0; h <= 2; h++)
{

for (hh = 0; hh <= 9; hh++)
{

if (h == 2 && hh == 4)
break;

for (m = 0; m <= 5; m++)
{

for (mm = 0; mm <= 9; mm++)
{

_putchar(h + '0');
_putchar(hh + '0');
_putchar(':');
_putchar(m + '0');
_putchar(mm + '0');
_putchar('\n');

}
}
}
}
}
