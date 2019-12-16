#include "holberton.h"
/**
 * _strcpy - cpy string
 * @dest: string
 * @src: string
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
int j, i = 0;
while (*(src + i) != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
*(dest + j) = *(src + j);
}
return (dest);
}
