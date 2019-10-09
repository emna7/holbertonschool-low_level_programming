#include "holberton.h"
/**
 * if_natural_square - check if a has natural square
 * @x: int
 * @y: int
 * Return: return success
 */
int if_natural_square(int x, int y)
{
if (x == (y * y))
return (y);
if (y  * y  >  x)
return (-1);
else
return (if_natural_square(x, y + 1));
}

/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: int
 * Return: success
*/
int _sqrt_recursion(int n)
{
if (n == 0)
return (-1);
else
return (if_natural_square(n, 1));
}
