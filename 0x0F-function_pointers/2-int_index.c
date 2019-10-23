#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that returns the index of the first element
 * @array: array
 * @size: number of elements of the array
 * @cmp: function pointer
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);
}
return (-1);
}
