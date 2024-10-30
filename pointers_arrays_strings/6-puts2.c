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
putchar(str[i]);
}
i++; 
}
putchar('\n');
}
