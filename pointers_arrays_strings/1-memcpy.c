#include "main.h"

/**
 * _memcpy- fill a memory zone
 *@dest: pointer to the start
 *@src: the octet that we want to fill
 *@n:the numbers of octet
 *Return: maybe
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;

i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
