#include <stdio.h>

/**
 *_islower - checks for lowercase character.
 *@c: is the ascii of the character
 * Return: Always 0.
 */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
return (0);
}
