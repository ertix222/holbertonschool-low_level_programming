#include "main.h"

/**
 *print_diagonal- print '\' this time
 *@n: number give by the checker
 *description: look up
 */

void print_diagonal(int n)

{
if (n > 1)
{
while (n--)
{
_putchar('\\');
}
}
_putchar('\n');
}
