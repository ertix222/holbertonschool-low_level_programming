#include "main.h"

/**
 *_islower- check if carac is lower or not
 *@c: 
 *Return: always
 */


int _islower(int c)

{
if (c > 96 && c < 123 || c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
