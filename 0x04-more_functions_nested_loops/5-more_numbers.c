#include "holberton.h"
/**
 * more_numbers - prints number from 0 to 14
 *
 * Return 0
*/
void more_numbers(void)
{
int c = 1;
int n = 0;
int x = 0;
int y = 0;

while (c <= 10)
}
n = 0;
while (n <= 14)
{
if (n < 10)
{
y = n;
}
else
{
x = (n / 10);
y = (n % 10);

_putchar(x + '0');
}
_putchar(y + '0');
n++;
}
_putchar('\n');
c++;
}
}
