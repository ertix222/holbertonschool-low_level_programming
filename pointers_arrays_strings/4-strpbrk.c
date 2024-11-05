#include <stdio.h>
#include "main.h"

/**
 *_strpbrk - Locate the first occurrence in the string s of any bytes in accept
 *
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: Pointer to the byte in s that matches in accept or NULL if not
 */

char *_strpbrk(char *s, char *accept)


{
int a, b;

for (a = 0; s[a] != '\0'; a++)
{

for (b = 0; accept[b] != '\0'; b++)
{

if (s[a] == accept[b])
{

return (&s[a]);
}
}
}

return (NULL);
}
