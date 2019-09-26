#include "holberton.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: is the size of the triangle
 * Return: void
*/
void print_triangle(int size)
{
int i, j, rows;
if (size <= 0)
_putchar('\n');
for(i = 0; i < size; i++)
{
for(j = 0; j < i; ++j)
{
_putchar("#");
}
_putchar('\n');
}
return 0;
}
