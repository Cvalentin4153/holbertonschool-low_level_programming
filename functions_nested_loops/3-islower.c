#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check (represented as an integer)
 *
 * Description: This function checks if the provided character `c`
 *              is a lowercase letter ('a' through 'z').
 *
 * Return: 1 if `c` is lowercase, 0 otherwise
 */
int _islower(int c)

{
if (c >= 97 && c <= 122)
return (1);

else

return (0);

}
