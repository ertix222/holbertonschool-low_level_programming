#include "main.h"

/**
 *string toupper- change lowercase tu uppercase
 * @s: modified string
 *Return: the result of the change
 */

char *string_toupper(char *s)


{
int a = 0;

while (s[a] != '\0')
{

if (s[a] >= 'a' && s[a] <= 'z')
{

s[a] = s[a] - 32;
}

a++;
}
return s;
}
