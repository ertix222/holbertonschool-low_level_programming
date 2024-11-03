#include "main.h"

/**
 *_strcat- concatenates two string in one
 * @dest: a pointer to the destination which must be sufficiently large
 * @src: pointer to source string
 *Return: a pointer to the destination string after the
 * concatenation.
 */

char *leet(char *s)

{
    char leet_letters[] = "aAeEoOtTlL";
    char leet_values[] = "4433007711";

    int a = 0;
    int b;
    
    while (s[a] != '\0')
      {
	
	for (b = 0; leet_lettres[b] != '\0'; b++)
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
