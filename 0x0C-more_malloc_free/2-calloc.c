#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: p
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i = 0;
if (size == 0 || nmemb == 0)
return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
return (NULL);
while (nmemb * size > i)
{
p[i] = 0;
i++;
}
return (p);
}
