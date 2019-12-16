#include "holberton.h"
/**
 * _strcmp- compare two strings.
 * @s1 : char.
 * @s2 : cha.
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
int a;
for (a = 0 ; s1[a] != '\0' ; a++)
{
if (s1[a] < s2[a])
{
return (s1[a] - s2[a]);
}
if (s1[a] > s2[a])
{
return (s1[a] - s2[a]);
}
}
return (0);
}
