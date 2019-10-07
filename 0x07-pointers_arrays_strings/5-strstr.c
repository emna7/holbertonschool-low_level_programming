#include"holberton.h"
/**
 * _strstr - searches a string for a a substring
 * @needle: what we're searching for
 * @haystack: where we're searching
 * Return: pointer to the first byte of match
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; *(haystack + i) != '\0'; i++)
{
for (j = 0; *(needle + j) != '\0'; j++)
{
if (haystack[i] == needle[j])
return (haystack);
}
}
return (haystack);
}
