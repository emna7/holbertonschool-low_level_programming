#include <stdio.h>
#include "holberton.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
int row, column;
int ones, tens;
int multiple;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
multiple = row * column;
if (multiple >= 10)
{
ones = multiple % 10;
tens = multiple / 10;
_putchar(' ');
_putchar(tens + '0');
_putchar(ones + '0');
}
else
{
if (column != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(multiple + '0');
}
if (column != 9)
{
_putchar(',');
}
if (column == 9)
{
_putchar('\n');
}
}
column = 0;
}
}
