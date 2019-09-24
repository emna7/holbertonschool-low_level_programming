#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: number to find last digit of
 *
 * Return: last digit of number r
 */

int print_last_digit(int r)
{
	int l = r % 10;

	if (l >= 0)
	{
		_putchar(l + '0');
		return (l);
	}
