#include <header.h>
/**
 * main - creating a shell
 * Return: always 0.
 */
int main(void)
{
char *buf;
char *stok, *argv[120];
size_t bf, bufsize = 32;
int i, status;
pid_t p;

buf = (char*)malloc(bufsize * sizeof(char));
if (buf == NULL)
{
perror("Unable to allocate buffer");
exit(1);
}
while (1)
{
printf("cisfun$");
i = 0;
stok = strtok(buf, " \n");
argv[i] = stok;
for (i = 0; stok != 0; i++)
{
stok = strtok(0, " \n");
argv[i] = stok;
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
//printf("father");
}
else
{
perror("fork failed");
}
printf("cisfun$");
}
if (strcmp(buf, "exit\n") == 0)
{
free(buf);
free(stok);
exit(1);
}
bf = getline(&buf, &bufsize, stdin);
if (bf == EOF)
{
write(STDOUT_FILENO, "\n", 1);
exit(0);
}
}
return(0);
}
