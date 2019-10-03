#include"holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s1: pointer
 * @s2: pointer
 * Return: 0
*/
int _strcmp(char *s1, char *s2)
{
int i, x;
i = 0;
while (s1[i] != '\0' || s2[i] != '\0')
{
if (s1[i] != s2[i])
{
x += s1[i] - s2[i];
}
i++;
}
return (x);
}
