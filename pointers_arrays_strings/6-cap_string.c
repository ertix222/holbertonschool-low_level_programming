#include "main.h"

/**
 *cap_string- capatalize word
 *Return:
 */

char *cap_string(char *s)

{
int a = 0;
int b = 0;

char separators[13] = " \t\n,;.!?\"(){}";


if (s[a] >= 'a' && s[a] <= 'z')
{
s[a] = s[a] - 32;
}
a++;

while (s[a] != '\0')
{
for (b = 0; separators[b] != '\0'; b++)
{

if (s[a - 1] == separators[b] && s[a] >= 'a' && s[a] <= 'z')
{
s[a] = s[a] - 32;

break;
}
}
a++;

}
return (s);
}
