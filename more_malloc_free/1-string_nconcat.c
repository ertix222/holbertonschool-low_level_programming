#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat- concatenated two string
 *@s1: first chain
 *@s2: second chain
 *@n: number of carac of the s2 to include
 *Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
unsigned int l1, l2, num_we_copy;
char *new_str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

l1 = strlen(s1);
l2 = strlen(s2);
num_we_copy  = (n < l2) ? n : l2;

new_str = malloc(l1 + num_we_copy + 1);

if (new_str == NULL)
{
return (NULL);
}

strcpy(new_str,  s1);
strncat(new_str, s2, num_we_copy);

return (new_str);

}
