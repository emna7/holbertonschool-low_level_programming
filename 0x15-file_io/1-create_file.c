#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: text conten
 * Return: 1 if success, 0 otherwise
*/
int create_file(const char *filename, char *text_content)
{
int file, x, i;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
for (i = 0; text_content[i] != 0; i++)
;
file = open(filename, O_RDWR | O_TRUNC | O_CREAT, 00600);
if (file == -1)
return (-1);
x = write(file, text_content, i);
if (x == -1)
return (-1);
close(file);
return (1);
}
