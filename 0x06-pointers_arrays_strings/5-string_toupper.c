#include"holberton.h"
/**
 * string_toupper - change all lowercase to upper
 * @s: pointer to array
 * Return: character
*/
char *string_toupper(char *s)
{
if (*s == 97 && *s <= 122)
{
*s = 90 - (122 - *s);
}
return (*s);
}
