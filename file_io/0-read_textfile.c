#include "main.h"

/**
* read_textfile- read a file and print is content
*@filename: name of the file
*@letters: numbers of letter to read and print
*Return: filename
*/

ssize_t read_textfile(const char *filename, size_t letters)

{
int fd;
ssize_t read_r, write_w;
char *buf;

fd = open(filename, O_RDONLY);/*open the file*/

if (filename == NULL)/*verify the entry*/
return (0);

if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);/*alloc a buffer with malloc*/
if (buf == NULL)

{
close(fd);
return (0);
}
read_r = read(fd, buf, letters);/*read a file*/

if (read_r == -1)
{
free(buf);
close(fd);
return (0);
}

write_w = write(STDOUT_FILENO, buf, read_r);
if (write_w == -1 || write_w != read_r)

{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (write_w);
}
