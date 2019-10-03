#include"holberton.h"
/**
 * cap_string - function that capitalizes a char
 * @s: pointer
 * Return: pointer to a string s */
char *cap_string(char *s) {
int i, j;
char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; sep[j] != '\0'; j++)
{
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
if (s[i] == sep[j])
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}
}
}
return (s);
}
