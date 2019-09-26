#include "holberton.h"
/**
 * more_numbers - prints number from 0 to 14
 *
 * Return 0
*/
void more_numbers(void)
{
int i = 0;
while (i < 10)
_putchar(i + '0');
while (i >= 10 && i <= 14)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_pucthar('\n');
}
}
