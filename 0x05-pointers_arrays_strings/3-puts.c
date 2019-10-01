#include"holberton.h"
/**
 * _puts(char *str) - function that prints a string followed by a new line
 * @*str: pointer
 * Return: 0
*/
void _puts(char *str);
{
char str[];
char *p;
while (*p != '\0')
_putchar("%c", *p++);
_putchar('\n');
return (0);
