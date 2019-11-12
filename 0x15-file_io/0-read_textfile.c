#include "holberton.h"
/**
 * read_textfile - function that prints a number of letters from a text file to STDOUT
 * @filename: name of file
 * @letters: number of letters
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t rcount, wcount;
int fd;
char *buf;

if (letters < 1 || filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(letters * sizeof(char));
if (buf == NULL)
{
free(buf);
return (0);
}
rcount = read(fd, buf, letters);
if (rcount == -1)
{
free(buf);
return (0);
}
wcount = write(STDOUT_FILENO, buf, rcount);
if (wcount == -1)
{
free(buf);
return (0);
}
close(fd);
free(buf);
return (wcount);
}
}
