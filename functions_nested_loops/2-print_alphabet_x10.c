#include "main.h"

/**
 *print_alphabet_x10- print a to z 10 times
 *
 *Return: always 0
 */

void print_alphabet_x10(void)
{
int i;
int a;
 for(a = 1 ; a <=  10; a++)
{
for (i = 'a' ; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n'); 
}
}
