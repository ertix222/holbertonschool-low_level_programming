#include "main.h"

/**
 *print_sign- print the sign of a number
 *
 *Return: always
 */

int print_sign(int n)

{
  if (n > 0)
    {
  _putchar(',');
  _putchar(' ');
  _putchar(n + '0');
  _putchar('\n');
  return (1);
    }
  else if (n == 0)
    {
  _putchar(',');
  _putchar(' ');
  _putchar(n + '0');
  _putchar('\n');
  return (0);
    }
  else
    {
  _putchar(',');
  _putchar(' ');
  _putchar(n + '0');
  _putchar('\n');
	 }
return (-1);
}
