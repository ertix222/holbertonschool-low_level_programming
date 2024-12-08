#include "main.h"

/**
* append_text_to_file- appends text to the end of a file
*@filename: The name of the file
*@text_content: The NULL-terminated string to add at the end of the file
*Return: 1 if success -1 if fail
*/

int append_text_to_file(const char *filename, char *text_content)

{
int fd, len = 0, write_res;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)/*if doesn't exist or can't be find*/
return (-1);

if (text_content != NULL)/*write in the file if it's not NULL*/
{
while (text_content[len] != '\0')/*calculate the lenght of the text*/
len++;

write_res = write(fd, text_content, len);

if (write_res == -1 || write_res != len)
{
close(fd);
return (-1);
}
}
close(fd);/*close the file and return 1 if sucess*/
return (1);
}
