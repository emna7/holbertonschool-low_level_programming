#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates 2 strings
 * @s1: pointer
 * @s2: pointer
 * Return: s
*/
char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int j = 0;
unsigned int i = 0;
unsigned int k = 0;
if (s1 != '\0')
{
while (s1[i] != '\0')
{
i++;
}
}
if (s2 != '\0')
{
while (s2[j] != '\0')
{
j++;
}
}
s = malloc((i + j) *sizeof(char) + 1);
if (s == NULL)
return (NULL);
for (k = 0 ; k < i; k++)
s[k] = s1[k];
i = i + j;
j = 0;
for (; k < i; k++)
{
s[k] = s2[j];
j++;
}
s[k + 1] = '\0';
return (s);
}
