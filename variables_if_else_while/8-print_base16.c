#include <stdio.h>

/**
 *main- 0-9-a-z
 *Return: always 0 (success)
 */

int main(void)
{
char c;
for (c = '0' ; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a' ; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

