#include <stdio.h>
/**
*
*
*
*/
void path()
{
extern char **environ;
int i = 0;
char *s;
while (environ[i])
{
token = strtok("PATH", "=");
toekn = strtok("PATH",
s = strtok("PATH", ":");
s = strtok(NULL, s);
printf("%s\n", s);
}
i++;
}
