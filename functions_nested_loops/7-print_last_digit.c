#include "main.h"

/**
 *print_last_digit- prints the last digit of a number
 *
 *
 *Return: always
 *
 */

int print_last_digit(int n)
{
int c;

if  (n < 0)
n = -n;
c = n % 10;

if (c < 0)
c = -c;
_putchar(c + '0');

return(c);
}
