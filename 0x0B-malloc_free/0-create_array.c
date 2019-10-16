#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: unsigned int
 * @c: char
 * Return: pointer
*/
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
return (NULL);
p = malloc(size * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < size; i++)
*(p + i) = c;
return (p);
}

