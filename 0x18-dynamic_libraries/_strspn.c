#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - that gets the length of a prefix substring.
 * @s: char type
 * @accept: char type
 * Return: r.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, a = 0;
for (i = 0; s[i] && !(s[i] == ' '); i++)
{
for (j = 0; accept[j]; j++)
{
if (accept[j] == s[i])
{
a++;
}
}
}
return (a);
}
