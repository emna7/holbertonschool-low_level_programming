#include"holberton.h"
/**
 * _abs - return the absolute value of a number
 * @i: number to check
 * Return: absolute value of i
 */

int _abs(int i)
{
if (i < 0)
{
return (i * -1);
}
else
{
return (i);
}
}
