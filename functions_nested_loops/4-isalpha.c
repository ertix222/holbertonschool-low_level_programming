#include "main.h"

/**
 *_isalpha- check if carac is lower or not
 *@c: check if carac is a letter or other thing
 *Return: always
 */

int _isalpha(int c)

{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
}
