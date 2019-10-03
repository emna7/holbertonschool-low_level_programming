#include"holberton.h"
/**
 * cap_string - function that capitalizes a char
 * @c: pointer
 * Return: pointer to a string c
*/
char *cap_string(char *c)
{
int i = 0;
int j = 0;
const int DIF = 32;
char sep[] = {' ', '\t', '\n', ',', ';', '.','!', '?', '"', '(', ')', '{', '}'};
while (c[i] != '\0')
{
for (j = 0; sep[j] != '\0'; j++)
{
if (c[i - 1] == sep[j])
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - DIF;
}
}
}
i++;
}
return (c);
}
