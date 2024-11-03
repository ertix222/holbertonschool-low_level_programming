#include "main.h"

/**
 *_strcmp- concatenates two string in one
 * @s1: first string
 * @s2: second string
 *Return: 0 if they're equal, less if s1 if less s2, more if s2 is greater than s1
 */

char _strcmp(char *s1, char *s2)

{


while (*s1 == *s2)

{
if (*s1 == '\0')

{
  return (0);
}
s1++;
s2++;
 }
 return(*s1 - s2);
}
