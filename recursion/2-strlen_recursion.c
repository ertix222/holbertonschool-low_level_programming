#include "main.h"

/**
 * _strlen_recursion- length of a string
 *@s: the string who will be calculate
 *Return: always
 */

int _strlen_recursion(char *s)

{

if (*s == '\0')
{

return (0);
}

return (1 + _strlen_recursion(s + 1));
}
