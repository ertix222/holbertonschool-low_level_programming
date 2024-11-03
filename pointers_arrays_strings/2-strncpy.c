#include "main.h"

/**
 *_strcat- concatenates two string in one
 * @dest: a pointer to the destination which must be sufficiently large
 * @src: pointer to source string
 * @n: maximum number of caracter to copy of src
 *Return: a pointer to the destination string after the
 * concatenation.
 */

char *_strncpy(char *dest, char *src, int n)

{
int a = 0;

while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}

while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
