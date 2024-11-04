#include <stdio.h>
#include "main.h"

/**
 * _strspn- 
 *Return: maybe
 */

unsigned int _strspn(char *s, char *accept);


{
unsigned int i;
i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return &s[i];
}
i++;
}
return (NULL);
}
