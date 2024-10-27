#include "main.h"

/**
 * times_table - start at 0 prints the 9 times table
 */

void times_table(void)

{
  int a, m, s;

  for(a = 0; a < 10; a++)
    {
      for (m = 0; m < 10; m++)
	{
	  s = a * m;
	  if (m == 0)
	    {
	      _putchar(s + '0');
	    }
	  if (s < 10 && m != 0)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(' ');
	      _putchar(s + '0');
	    }else if (s >= 10)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar((s / 10) + '0');
	      _putchar((s % 10) + '0');
	    }
	}
      _putchar('\n');
    }

}
