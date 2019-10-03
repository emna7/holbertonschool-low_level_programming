#include"holberton.h"
/**
 * _strncpy - function that copies a string
 * @src: pointer
 * @dest: pointer
 * @n: number of bytes
 * Return: 0
*/
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
i = 0;
for (i = 0; src[i] != '\0' && i < n; i++)
j = 0;
*(dest + j) = *(src + i);
return (dest);
}
