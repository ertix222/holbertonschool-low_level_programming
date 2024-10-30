#include "main.h"

/**
 *_strlen: replace the command strlen
 *@s:yes
 *description: write the lenght of a string
 */

int _strlen(char *s)

{

int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
