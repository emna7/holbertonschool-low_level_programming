#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits needed
 *to flip to get from one number to another.
 * @n: unsigned long int
 * @m: second unsigned long int
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int bits = 0, xor;
for (xor = n ^ m; xor != 0; xor = xor >> 1)
bits += xor & 1;
return (bits);
}
