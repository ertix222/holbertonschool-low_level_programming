#include "main.h"

/**
 * _strcpy - Copies a string from src to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)

{

int i, j;
i = 0;

while (src[i] != '\0')

{
i++;
}

for (j = 0; j < i; j++)

{
dest[j] = src[j];
}
dest[j] = '\0';

return (dest);
}
