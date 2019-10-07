#include"holberton.h"
/**
 * _strstr - searches a string for a a substring
 * @needle: what we're searching for
 * @haystack: where we're searching
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
int x = 0;
i = 0;
while (haystack[i] != '\0')
{
j = 0;
while (needle[j + x] != '\0' && haystack[i + x] != '\0'
&& needle[j + x] == haystack[i + x])
{
if (haystack[i + x] != needle[j + x])
break;
x++;
}
if (needle[j + x] == '\0')
return (&haystack[i]);
j++;
i++;
}
return (NULL);
}

