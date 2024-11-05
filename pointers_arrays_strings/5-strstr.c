#include <stdio.h>
#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle in haystack
 * @haystack: The main string to be searched
 * @needle: The substring to find in haystack
 * Return: Pointer to the beginning of the substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)

{
int a, b;

if (*needle == '\0')
return (haystack);

for (a = 0; haystack[a] != '\0'; a++)
{

for (b = 0; needle[b] != '\0'; b++)
{

if (haystack[a + b] != needle[b])
break;
}

if (needle[b] == '\0')
return (&haystack[a]);
}
return (NULL);
}
