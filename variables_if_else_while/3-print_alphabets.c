#include <stdio.h>

/**
 *main- double alphabet
 *Return: always (success)
 */

int main(void)
{
char c;
char d;
for (c = 'a' ; c <= 'z'; c++)
{
putchar(c);
}
for (d = 'A' ; d <= 'Z'; c++)
{
putchar(d);
}
putchar('\n');
return (0);
}
