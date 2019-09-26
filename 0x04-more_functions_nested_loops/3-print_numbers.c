#include "holberton.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * @x: variable to print
 * Return: 0
*/
void print_numbers(int x)
{
int x;
for (x = '0'; x <= '9'; x++)
{
_putchar(x);
_putchar('\n');
}
}
