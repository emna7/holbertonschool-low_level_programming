#include <stdlib.h>
#include <stdio.h>
int main()
{
size_t memory_read;
size_t nbytes = 255;
char *str;
str = (char *) malloc(sizeof(char) * nbytes);
if (str == NULL)
return (0);
printf("$");
memory_read = getline (&str, &nbytes, stdin);
printf("%s", str);
return (0);
}
