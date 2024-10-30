#include "main.h"

/**
 *rev_string- esrever string
 *@i:yes
 *description: write who reverse a string
 */


void puts2(char *str)

{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++; 
}
_putchar('\n');
}
