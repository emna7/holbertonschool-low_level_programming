#include "holberton.h"
/**
 * _isupper - checks is an alpha is uppercase
 * @c: variable to check
 * Return: 1 if uppercase, 0 otherwise
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
