#include "main.h"

/**
* create_file- create a file and write in
*@filename: The name of the file to create
*@text_content: The NULL-terminated string to write to the file
*Return: 1 if success -1 if fail
*/

int create_file(const char *filename, char *text_content)

{
int fd, write_res;
int len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
/*open or create a file with read perm only*/

if (fd == -1)
return (-1);

if (text_content != NULL)/*calculate is lenght if its not NULL*/

{
while (text_content[len] != '\0')
len++;

write_res = write(fd, text_content, len);

if (write_res == -1 || write_res != len)

{
close(fd);
return (-1);
}
}

close(fd);/*close and return 1 if sucess*/
return (1);
}
