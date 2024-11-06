#include "main.h"

/**
 * factorial- the factorial number of a given number
 *@n: given number
 *Return: maybe
 */

int factorial(int n)

{
if (n < 0)
return (-1);
if (n == 0)
return (1);

return (n * factorial(n - 1));
}
