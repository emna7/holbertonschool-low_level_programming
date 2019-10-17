#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: p
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
char *ptr_copy, *s;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
return (NULL);
return (p);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
ptr_copy = ptr;
p = malloc(sizeof(*ptr_copy) * new_size);
if (p == NULL)
{
free(ptr);
return (NULL);
}
s = p;
for (i = 0; i < old_size && i < new_size; i++)
s[i] = *ptr_copy++;
free(ptr);
return (p);
}
