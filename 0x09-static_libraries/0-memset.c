#include"holberton.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: char
 * @n: number of bytes to fill
 * Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int l = 0;
while (l <= n - 1)
{
s[l] = b;
l++;
}
return (s);
}
