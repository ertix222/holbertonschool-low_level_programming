#include <stdio.h>

/**
 *main- double alphabet
 *Return: always (success)
 */

int main(void)
{
char c;
for (c = 'a' ; c <= 'z'; c++)
{
while(c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}