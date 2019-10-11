#include"holberton.h"
/**
 * _isalpha - checks for an alphabetic character
 *
 * @c: variable to check
 *
 * Return: 1 if alpha, 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
