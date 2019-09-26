#include "holberton.h"
/**
 * more_numbers - function that prints 10 times the numbers
 * void
 * Return: void
 */
void more_numbers(void)
{
int a, b;
for (b = 0; b < 10; b++)
{
for (a = 0; a <= 14; a++)
{
if (a >= 10)
_putchar('0' + (a / 10));
_putchar('0' + (a % 10));
}
_putchar('\n');
}
}
