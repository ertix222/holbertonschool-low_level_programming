#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers- a function that prints numbers, followed by a new line
*@separator: A string that will be printed between each number
*@n: total number of integers passed to the function
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)

{
unsigned int i = 0;
va_list args;

if (n == 0)
{
printf("\n");
return;
}
va_start(args, n);

for (; i < n; i++)
{
if (separator != NULL && i < n - 1)
{
printf("%d%s", va_arg(args, int), separator);
}
else
{
printf("%d", va_arg(args, int));
}
}

va_end(args);
printf("\n");
}
