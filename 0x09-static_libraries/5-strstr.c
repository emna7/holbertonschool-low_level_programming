#include"holberton.h"
/**
 * _strstr - searches a string for a a substring
 * @needle: what we're searching for
 * @haystack: where we're searching
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *htest = haystack;
char *ntest = needle;
while (*haystack && *ntest && *haystack == *ntest)
{
haystack++;
ntest++;
}
if (!*ntest)
return (htest);
haystack = htest + 1;
}
return (0);
}
