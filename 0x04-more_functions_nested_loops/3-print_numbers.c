#include "holberton.h"

/**
 * print_numbers - prints 0 to 9
 *
 * Return: nothing;
 */

void print_numbers(void)
{
int count;

for (count = 0; count < 10; count++)
{
_putchar(count + '0');
}
_putchar('\n');
}
