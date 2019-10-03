#include"holberton.h"
/**
 * string_toupper - change all lowercase to upper
 * @s: pointer to array
 * Return: character
*/
char *string_toupper(char *s)
{
int i;
while (s[i] != '\0')
{
if (s[i] == 97 && s[i] <= 122)
{
s[i] = 90 - (122 - s[i]);
}
i++;
}
return (s);
}
