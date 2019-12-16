#include "holberton.h"
/**
 *_strncat - function that concatinates two strings.
 * @dest: pointer
 * @src: pointer
 *@n : bytes
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int i, k;
i = 0;
k = 0;
while (dest[i] != '\0')
i++;
for (k = 0; k < n && src[k] != '\0'; k++, i++)
dest[i] = src[k];
dest[i] = '\0';
return (dest);
}
