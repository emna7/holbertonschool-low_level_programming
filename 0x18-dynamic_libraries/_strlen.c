#include "holberton.h"
/**
 * _strlen - prints the length of a string.
 * @s: pointer
 * Return: nothing
 */
int _strlen(char *s)
{
  int c;
  c = 0;
  while ((*(s + c)) != '\0')
    {
      c += 1;
    }
  return (c);
}
