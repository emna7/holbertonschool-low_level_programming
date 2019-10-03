#include"holberton.h"
/**
 * cap_string - function that capitalizes a char
 * @c: pointer
 * Return: pointer to a string c
*/
char *cap_string(char *c)
{
int i = 0;
const int DIF = 32;
char s[] = {' ', '\t', '\n', ',', ';',
 '.', '!', '?', 34, '(', ')', '{', '}'};
while (c[i] != '\0')
{
j = 0;
while (sep[j] != '\0')
{
if (c[i - 1] == sep[j])
{
if (c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - DIF;
}
}
j++
}
i++;
}
return (c);
}
