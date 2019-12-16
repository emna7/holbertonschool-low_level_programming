#include "holberton.h"
/**
 * _strcat - function that concatinates two strings.
 * @dest: pointer
 * @src: pointer
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
int i, k;
i = 0;
while (dest[i] != '\0')
i++;
for (k = 0; src[k] != '\0'; k++, i++)
dest[i] = src[k];
dest[i] = '\0';
return (dest);
}
