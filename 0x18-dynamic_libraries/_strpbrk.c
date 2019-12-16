#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: char
 *@accept: char
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
s = &s[i];
return (s);
}
}
}
return ('\0');
}
