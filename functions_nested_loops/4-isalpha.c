#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic
 * @c: The character to check (represented as an integer)
 *
 * Description: This function checks if the provided character `c`
 *              is an alphabetic letter, either lowercase or uppercase.
 *
 * Return: 1 if `c` is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)

{

if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))

return (1);

else

return (0);
}
