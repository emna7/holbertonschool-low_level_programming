#include "holberton.h"
/**
* append_text_to_file - function that appends text to a file
* @filename: file name
* @text_content: text content
* Return: 1 on success, -1 otherwise
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, x, i;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
for (i = 0; text_content[i] != 0; i++)
;
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);
x = write(fd, text_content, i);
if (x == -1)
return (-1);
close(fd);
return (1);
}
