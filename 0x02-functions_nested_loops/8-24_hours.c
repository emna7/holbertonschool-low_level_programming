#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day starting from
 * 00.00  to 23.59
 *
 * Return: nothing
 */
void jack_bauer(void)
{
int h, m;
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar(h / 10);
_putchar(h % 10);
_putchar(':');
_putchar(m / 10);
_putchar(m % 10);
_putchar('\n');
}
}
}
