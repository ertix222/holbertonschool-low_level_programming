#include "main.h"

/**
 *leet- mozart 1337
 * s: the string which will be modified
 *Return: 1337
 */

char *leet(char *s)

{
char leet_letters[] = "aAeEoOtTlL";
char leet_values[] = "4433007711";

int a = 0;
int b;
    
while (s[a] != '\0')
{
	
for (b = 0; leet_letters[b] != '\0'; b++)
{
  
if (s[a] == leet_letters[b])
{

s[a] = leet_values[b];
break;
}
}

a++;
}

return s;
}
