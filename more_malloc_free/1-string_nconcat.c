#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strlen- replace the command strlen
 *@s:yes
 *Return: yes
 */

int _strlen(char *s)

{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * string_nconcat- concatenated two string
 *@s1: first chain
 *@s2: second chain
 *@n: number of carac of the s2 to include
 *Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
unsigned int L1, L2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

L1 = _strlen(s1);
L2 = _strlen(s2);

if (s1 != NULL)
{
while (s1[L1] != '\0')
{
L1++;
}
}

if (s2 != NULL) {
while (s2[L2] != '\0' && L2 < n) {
L2++;
}
}
}
