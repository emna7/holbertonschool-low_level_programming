#include"holberton.h"
/**
 * void swap - swapsthe values of 2 integers
 * @a, @b : pointers
 * return: 0
*/
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
