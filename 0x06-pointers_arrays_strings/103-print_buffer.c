#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - Prints a buffer
 * @b: The buffer to be printed.
 * @size: The number of octs to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
int oct, i;
for (oct = 0; oct < size; oct += 10)
{
printf("%08x: ", oct);
for (i = 0; i < 10; i++)
{
if ((i + oct) >= size)
printf(" ");
else
printf("%02x", *(b + i + oct));
if ((i % 2) != 0 && i != 0)
printf(" ");
}
for (i = 0; i < 10; i++)
{
if ((i + oct) >= size)
break;
else if (*(b + i + oct) >= 31 &&
*(b + i + oct) <= 126)
printf("%c", *(b + i + oct));
else
printf(".");
}
if (oct >= size)
continue;
printf("\n");
}
if (size <= 0)
printf("\n");
}
