#include"holberton.h"
/**
 * _strpbrk - searches a string
 * @s: pointer
 * @accept: pointer
 * Return: pointer to first of bytes from accept in s
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
