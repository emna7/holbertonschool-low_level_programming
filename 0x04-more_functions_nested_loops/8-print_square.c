#include "holberton.h"

/**
 * print_square - prints a square of given size
 * @size: size of square
 * Return: none;
 */

void print_square(int size)
{
int a1, a2;

if (size <= 0)
_putchar('\n');
for (a1 = 0; a1 < size; a1++)
{
for (a2 = 0; a2 < size; a2++)
{
_putchar('#');
}
_putchar('\n');
}
}
