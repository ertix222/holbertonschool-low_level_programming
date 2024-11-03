#include "main.h"

/**
 *_strcat- concatenates two string in one
 * @dest: a pointer to the destination which must be sufficiently large
 * @src: pointer to source string
 *Return: a pointer to the destination string after the
 * concatenation.
 */

char *_strcat(char *dest, char *src)

{
int a, b;

a = 0;
b = 0;

while (dest[a] != '\0')
a++;

while (src[b] != '\0')

{
dest[i] = src[b];
a++;
b++;
}
dest[i] = '\0';
return (dest);
}
