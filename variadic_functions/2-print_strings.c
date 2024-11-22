#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings- a function that prints strings, followed by a new line
*@separator:  A string that will be printed between each number
*@n: total number of integers passed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)

{
unsigned int i;
va_list args;
char *str;
if (n == 0)
{
printf("\n");
return;
}
va_start(args, n);

for (i = 0;  i < n; i++)
{
str = va_arg(args, char*);

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
