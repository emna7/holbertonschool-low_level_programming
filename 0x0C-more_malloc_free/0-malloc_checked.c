#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: int
 * Return: p
*/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}