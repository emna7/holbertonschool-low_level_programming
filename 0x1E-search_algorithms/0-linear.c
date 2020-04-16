#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: Pointer to first element of array to search in
 * @size: Size of array
 * @value: Value to search for
 * Return: index of value, or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
int i;
if (!array)
return (-1);
for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
