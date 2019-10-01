#include"holberton.h"
/**
 * _puts(char *str) - function that prints a string followed by a new line
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
i + = 1;
}
_putchar('\n');
}
