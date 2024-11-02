#include "main.h"

/**
 *_atoi- convert string to integer
 *@s: string to be convert
 *
 */

int _atoi(char *s)
  
{
  int a, b, c, d, e, digit;

  a = 0;
  b = 0;
  c = 0;
  d = 0;
  e = 0;
  digit = 0;

  while (s[d] != '\0')
    d ++;
  while(a < d && e == 0)
    {
      if (s[a] == '-')
	++b;
      if (s[a] >= '0' && s[a] <= '9')
	{
	  digit = s[a] - '0';
	  if (b % 2)
	    digit = -digit;
	  c = c * 10 + digit;
	  e = 1;
	    if (s[a + 1] < '0' || s[a + 1] > '9')
	      break;
	    e = 0;
		}
      a++;
	}
  if (e == 0)
    return(0);

      return(c);
}
