#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat- a function that concatenates two strings
 *@s1: first part
 *@s2: second part
 *Return: concatenate
 */
char *str_concat(char *s1, char *s2)

{
int a, b, i;
char *s3;
a = 0;
b = 0;

if (s1 != NULL)
{
while (s1[a] != '\0')
a++;
}
if (s2 != NULL)
{
while (s2[b] != '\0')
b++;
}

s3 = (char *)malloc((a + b + 1) * sizeof(char));
if (s3 == NULL)
{
return (NULL);
}
for (i = 0; i < a; i++)
{
s3[i] = s1[i];
}
for (i = 0; i < b; i++)
{
s3[i + a] = s2[i];
}
s3[a + b] = '\0';
return (s3);
}
