#include "main.h"

/**
 *more_numbers- print 0 to 14 more time
 *description: look up
 */

void more_numbers(void)

{
int i;
int a;
for (a = 1 ; a <= 10; a++)
{
for (i = 0 ; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
{
_putchar('\n');
}
}
}
