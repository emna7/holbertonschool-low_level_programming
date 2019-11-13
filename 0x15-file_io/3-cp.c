#include "holberton.h"
/**
 * main - copies the contents of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int x, x1, x2;
char *buf;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage cp file_from file_to\n");
exit(97);
}
buf = malloc(1024 * sizeof(char));
if (buf == NULL)
return (-1);
x1 = open(argv[1], O_RDONLY);
if (x1 == -1)
{
free(buf);
dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n", argv[1]);
exit(98);
}
x2 = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
if (x2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", argv[2]);
exit(99);
}
(void) x;
free(buf);
return (0);
}
