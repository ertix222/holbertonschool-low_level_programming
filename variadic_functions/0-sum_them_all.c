#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all- a function that return the sum of all its parameters
*@n: 
*
*Return: 
*/

int sum_them_all(const unsigned int n, ...)

{
int sum = 0, total = 0;
unsigned int i = 0;
if (n == 0)
return (0);

va_list args;
va_start (args, n);

for (; i < n; i++)
{
    total += va_arg(args, int)
}
va_end(args);
return (total);

}