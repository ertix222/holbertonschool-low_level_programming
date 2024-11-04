#include "main.h"

/**
 * _memset- fill a memory zone
 *@s: pointer to the start
 *@b: the octet that we want to fill
 *@n:the numbers of octet
 *Return: maybe
 */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
