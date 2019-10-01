#include"holberton.h"
/**
 * _puts - function that prints a string followed by a new line
 * @str: pointer
 * Return: 0
*/
void _puts(char *str)
{
int i;
i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++
}
_putchar('\n');
}
