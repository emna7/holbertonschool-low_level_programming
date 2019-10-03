#include"holberton.h"
/**
 * _strncat - function that concatinates two strings
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes
 * Return: 0
*/
char *_strncat(char *dest, char *src, int n)
{
int destlen, srclen;
for (destlen = 0; dest[destlen] != '\0'; destlen++)
;
for (srclen = 0; srclen < n && src[srclen] != '\0'; srclen++)
dest[destlen + srclen] = src[srclen];
return (dest);
}
