#include <stdio.h>
#include "main.h"

/**
 * _strspn- get the length of a prefix substring
 *@s:
 *@accept: 
 *Return: maybe
 */

unsigned int _strspn(char *s, char *accept);


{
 unsigned int count = 0;

 int a, b;

 for (a = 0; s[a] != '\0'; a++)
   {
     int found = 0;

     for (b = 0; accept[b] != '\0';b++)
       {
	 if (s[a] == accept[b])

  }
