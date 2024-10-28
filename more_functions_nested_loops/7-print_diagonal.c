#include <stdio.h>
#include "main.h"

/**
 *print_diagonal- print '\' this time
 *@n: number give by the checker
 *description: look up
 */

void print_diagonal(int n)

int i, j;
{
if (n > 0)
{
while (n--)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
else
{
_putchar('\n');
}
}
