#include "holberton.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: 0
*/
void print_numbers(int x)
{
int x;
for (x = '0'; x <= '9'; x++)
{
_putchar(x + '0');
_putchar('\n');
}
}
