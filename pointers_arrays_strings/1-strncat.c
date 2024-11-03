#include "main.h"

/**
 *_strncat- concatenates two string in one
 * @dest: a pointer to the destination which must be sufficiently large
 * @src: pointer to source string
 *@n: the numbers of bytes of the str
 *Return: a pointer to the destination string after the
 * concatenation.
 */

char *_strncat(char *dest, char *src, int n)

{
int a, b;

a = 0;
b = 0;

while (dest[a] != '\0')
a++;

while (src[b] != '\0' && b < n)

{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
