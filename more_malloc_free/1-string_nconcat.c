#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- 
 *@s1: first chain
 *@s2: second chain
 *@n: number of carac of the s2 to include
 *Return: pointer to the concatenated string
 */

char *string_nconcat(char*s1,  char *s2, unsigned int n)

{

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

 
unsigned int l1 = strlen(s1);
unsigned int l2 = strlen(s2);
unsigned int num_we_copy  = (n < l2) n : l2;


char *new_str = malloc(l1 + num_we_copy + 1);


if (new_str == NULL)
{
return (NULL);
}

strcpy(new_str,  s1);
strncat(new_str, s2, num_we_copy);

return new_str;
 
}
