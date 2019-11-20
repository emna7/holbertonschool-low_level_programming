#include "holberton.h"
/**
 * errorHandle - handles errors.
 * @src: source fd.
 * @dest: dest fd.
 * @close: close status.
 * @args: arguments.
 * Return: status.
 */
void errorHandle(int src, int dest, int close, char *args[])
{
if (src < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
exit(98);
}
if (dest < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
exit(99);
}
if (close < 0 && src > 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", args[1]);
exit(100);
}
if (close < 0 && dest > 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", args[2]);
exit(100);
}
}
/**
 * main - copies file.
 * @argc: num of args.
 * @argv: arguments.
 * Return: status.
 */
int main(int argc, char *argv[])
{
int filefrom, fileto;
int r, w, c;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
filefrom = open(argv[1], O_RDONLY);
errorHandle(filefrom, 1, 1, argv);
fileto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
errorHandle(1, fileto, 1, argv);
r = 1024;
while (r == 1024)
{
r = read(filefrom, buffer, 1024);
errorHandle(r, 1, 1, argv);
w = write(fileto, buffer, r);
if (w != r)
w = -1;
errorHandle(1, w, 1, argv);
}
c = close(filefrom);
errorHandle(filefrom, 1, c, argv);
c = close(fileto);
errorHandle(1, fileto, c, argv);
return (0);
}
