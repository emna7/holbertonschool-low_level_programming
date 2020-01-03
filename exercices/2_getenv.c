#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
char *_getenv(const char *name)
{
char *var, s2[100];
char s[1] = "=";
int i = 0;
extern char **environ;
while (environ[i])
{
var = strtok(environ[i], s);
if (strcmp(var, name) == 0)
{
var = strtok(NULL, "\0");
printf("%s\n", var);
}
i++;
}
return (0);
}

int main(void)
{
char *name=NULL;
size_t size = 50;
printf("enter : ");
getline(&name, &size, stdin);
name[strlen(name) - 1] = '\0';
_getenv(name);
return (0);
}
