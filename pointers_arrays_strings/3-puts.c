#include "main.h"

/**
 *_puts- write like put
 *@str:yes
 *description: write what poitn *str
 */


void _puts(char *str)

{
int i = 0;
while (str[i] != '\0')
  _putchar(str[i]);
i++;
}
