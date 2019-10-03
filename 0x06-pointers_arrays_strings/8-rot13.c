#include"holberton.h"
/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer
 * Return: s
*/
char *rot13(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if ((s[i] - 65) > 12 || (s[i] - 97) > 12)
{
s[i] = s[i] - 13;
}
else
{
s[i] = s[i] + 13;
}
i++;
}
return (s);
}
