#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - creating a shell
 *
 * Return: always 0.
 */
int main(void)
{
char *buffer;
size_t bufsize = 32;
/*char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};*/
char *tok, *argv[100];
int i, status;
pid_t p;

buffer = (char*)malloc(bufsize * sizeof(char));
if (buffer == NULL)
{
perror("Unable to allocate buffer");
exit(1);
}
printf("cisfun$ ");
while (getline(&buffer, &bufsize, stdin) != -1)
{
i = 0;
tok = strtok(buffer, " \n");
argv[i] = tok;
while (tok != 0)
{
i++;
tok = strtok(0, " \n");
argv[i] = tok;
}
argv[i] = NULL;
p = fork();
if (p == 0)
{
if (execve(argv[0], argv, NULL) == -1)
perror("Error:");
printf("child");
}
else if (p > 0)
{
if ((p = wait(&status)) < 0)
perror("wait");
printf("father");
}
else
{
perror("fork failed");
}
printf("cisfun$ ");
}
return(0);
}
