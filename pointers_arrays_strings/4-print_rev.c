#include "main.h"

/**
 *print_rev- taht ekil etirw
 *@s:yes
 *description: write in esrever
 */


void print_rev(char *s)

{
int i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
while (s[i] != s)
{
_putchar(str[i]);
i--;
_putchar('\n');
}
}
