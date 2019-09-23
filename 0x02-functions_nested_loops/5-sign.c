#include"holberton.h"
/**
 * _sign - checks for a number
 * @i: variable to check
 * Return: 1 if number is positive, 0 if number = 0, -1 if number is negative
*/

int _sign(int i)
{
if (i > 0)
{
return (1);
}
if (i == 0)
{
return (0);
}
if (i < 0)
{
return (-1);
}
}
