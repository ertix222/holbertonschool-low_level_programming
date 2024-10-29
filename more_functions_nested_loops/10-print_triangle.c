#include <stdio.h>
#include "main.h"

/**
 *print_triangle- triangle
 *description: triangle with charac '#'
 */

void print_triangle(int size)

{
int a, b;
if (size <=0)
{
_putchar('\n');
return;
}
for (a = 1; a <= size; a++)
{
for (b = 0; b< size - a; b++)
{
_putchar(' ');
}
for (b = 0; b < a; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
