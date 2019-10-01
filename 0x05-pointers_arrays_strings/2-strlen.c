#include"holberton.h"
/**
 * _strlen(char *s) - function that returns the length of a string
 * @s: pointer
 * return: i
*/
int _strlen(char *s)
{
int i;
i = 0;
while ((*(s + i)) != '\0')
i++;
return (i);
}
