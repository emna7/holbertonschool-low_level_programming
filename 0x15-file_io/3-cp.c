#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
*/
int main(int argc, char **argv)
{
int x1, x2, rd, wr;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
if (argv[1] == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
x1 = open(argv[1], O_RDWR, 0777);
if (x1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
x2 = open(argv[2],  O_RDWR | O_CREAT | O_TRUNC, 0664);
if (x2 == -1)
{
dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
exit(99);
}
rd = read(x1, buf, 1024);
while (rd > 0)
{
wr = write(x2, buf, rd);
if (wr != rd)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
rd = read(x1, buf, 1024);
}
if (rd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close (x1) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
exit(100);
}
if (close(x2) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
exit(100);
}
return (0);
}
