#include "main.h"

/**
 *puts_half- half of a ---ing
 *@str:yes
 *description: write only a half of a string
 */

void puts_half(char *str)

{
int i = 0;

while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
i = i / 2;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
else
{
  i = (i - 1) / 2;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
_putchar('\n');
}
