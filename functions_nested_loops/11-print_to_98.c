#include "main.h"
#include <stdio.h>
/**
* 
*This function prints out all numbers until 98 from the value you give to the integer.
*
*Return- void
*/
void print_to_98(int n)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
printf("\n");
}
