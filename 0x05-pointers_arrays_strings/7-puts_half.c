#include "holberton.h"
/**
 * puts_half - ptints half of a string
 * @str: type char
 * Return: half of the string
*/
void puts_half(char *str)
{
int i, j, x;
i = 0;
while (str[i] != '\0')
{
i++;
}
if (i % 2 != 0)
{
j = (i / 2) + 1;
}
else
{
j = (i / 2);
}
for (x = j; x < i; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
