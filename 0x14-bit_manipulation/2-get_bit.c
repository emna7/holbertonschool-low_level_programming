#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit
 * @n: unsigned long int
 * @index: the given index
 * Return: the value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int val;
if (index > 31)
return (-1);
val = (n >> index) & 1;
return (val);
}
