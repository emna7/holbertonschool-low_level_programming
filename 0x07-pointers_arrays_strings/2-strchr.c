#include"holberton.h"
/**
 * _strchr - finds if char occurs in string
 * @s: string to check
 * @c: character to find in s
 * Return: pointer to first instance of c, otherwise NULL
*/
char *_strchr(char *s, char c)
{
int i = 0;
int l = 0;
while (s[l] != '\0')
l++;
while (i <= l)
{
if (s[i] == c)
{
s = s + i;
return (s);
}
i++;
}
if (i < l)
s[i + 1] = '\0';
return (0);
}
