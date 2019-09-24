#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit
 * @n: takes in an integer
 * Return: returns output
 */
int print_last_digit(int n)
{
int x = n % 10;
if (n < 0)
x = x * -1;
_putchar(x + '0');
return (x);
}
