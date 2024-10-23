#include <stdio.h>

/**
 *main- 0-9-a-z
 *Return: always 0 (success)
 */

int main(void)
{
int c;
for (c = '0' ; c <= '9'; c++)
{
putchar(c);
if (c < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
